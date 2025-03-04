#include <iostream>
using namespace std;

void bubble_sort(int array[], int n, int &swap_count) 
{
    swap_count = 0; 

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                // Swap elements
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                swap_count++; 
            }
        }
    }
}
int main()
{
    int array[] = {1, 5, 56, 6, 9};
    int n = sizeof(array) / sizeof(array[0]);
    int swap_count = 0;
    bubble_sort(array, n, swap_count);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\nTotal swaps: " << swap_count << endl;
    cout << "Name: Kaniz Fatema" << endl << "ID: 20245103154" << endl;
    return 0;
}
