#include <iostream>
#include "01_insert-an-element-in-array.h"
using namespace std;

void insertElement(int arr[], int &size, int element, int position) 
{
  
    for (int i = size; i > position; i--) 
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = element; 
    size++;
}

void displayArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/ sizeof(arr[0]);

    cout << "Before insertion: ";
    displayArray(arr, size);

    int element, position;
    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the position (0 to " << size << ") where the element should be inserted: ";
    cin >> position;

    if (position < 0 || position > size) 
    {
        cout << "Invalid position!" << endl;
    } 
    else 
    {
        insertElement(arr, size, element, position);
        cout << "After insertion: ";
        displayArray(arr, size);
    }

    cout<<"Name: Kaniz Fatema"<< endl<< "ID: 20245103154"<<endl;
    return 0;
}
