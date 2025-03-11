#include <iostream>
using namespace std;

void deleteByValue(int arr[], int &size, int value) 
{
    int position = -1;

    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == value) 
        {
            position = i;
            break;
        }
    }
    
    if (position != -1) 
    {
        for (int i = position; i < size - 1; i++) 
        {
            arr[i] = arr[i + 1];
        }
        size--;
        cout << "Element " << value << " deleted by value." << endl;
    } 
    else 
    {
        cout << "Element " << value << " not found!" << endl;
    }
}
void deleteByPosition(int arr[], int &size, int position) 
{
    if (position < 0 || position >= size) 
    {
        cout << "Invalid position!" << endl;
        return;
    }
    
    for (int i = position; i < size - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "Element at position " << position << " deleted." << endl;
}


void displayArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5; 

    cout << "Before deletion: ";
    displayArray(arr, size);

    int choice, value, position;

    cout << "Choose deletion method:" << endl;
    cout << "1. Delete by value" << endl;
    cout << "2. Delete by position" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) 
    {
        case 1:
            cout << "Enter the value to delete: ";
            cin >> value;
            deleteByValue(arr, size, value);
            break;
        case 2:
            cout << "Enter the position to delete (0 to " << size - 1 << "): ";
            cin >> position;
            deleteByPosition(arr, size, position);
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
    cout << "After deletion: ";
    displayArray(arr, size);
    cout<<"Name: Kaniz Fatema"<< endl<< "ID: 20245103154"<<endl;
    return 0;
}
