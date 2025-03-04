#include <iostream>
using namespace std;
void selection_sort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[min_index])
            {
                min_index = j;
            }
        }
        int temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;
    }
}
int main()
{
    int array[5] = {1, 5, 56, 6, 9};
    int n = sizeof(array) / sizeof(array[0]);
    selection_sort(array, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << "Name: Kaniz Fatema" << endl << "ID: 20245103154" << endl;

    return 0;
}
