#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the length of array: ";
    cin >> n;

    // Declare array with dynamic size based on user input
    int arr[n];

    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Shift elements to the left
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = 0; // Replace the last element with 0

    cout << "Final array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
