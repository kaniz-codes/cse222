#include <iostream>
using namespace std;
int getMax(int array[], int n) 
{
    int max = array[0];
    for (int i = 1; i < n; i++)
        if (array[i] > max)
            max = array[i];
    return max;
}
void countingSort(int array[], int n, int placeValue) 
{
    int output[n];
    int count[10] = {0};
    for (int i = 0; i < n; i++) 
    {
        int digit = (array[i] / placeValue) % 10;
        count[digit]++;
    }
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for (int i = n - 1; i >= 0; i--) 
    {
        int digit = (array[i] / placeValue) % 10;
        int position = count[digit] - 1;
        output[position] = array[i];
        count[digit]--;
    }
    for (int i = 0; i < n; i++)
        array[i] = output[i];
}
void radixSort(int array[], int n) 
{
    int max = getMax(array, n);
    for (int placeValue = 1; max / placeValue > 0; placeValue *= 10)
        { countingSort(array, n, placeValue); }
}
int main() 
{
    int array[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(array) / sizeof(array[0]);
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;
    radixSort(array, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;
    cout << "Name: Kaniz Fatema" << endl << "ID: 20245103154" << endl;

    return 0;
}
