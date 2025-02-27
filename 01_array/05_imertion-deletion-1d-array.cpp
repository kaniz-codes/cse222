#include <iostream>
using namespace std;

void insertElement(int arr[], int &size, int element, int position) 
{

    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element; // Insert element
    size++;
}

void deleteElement(int arr[], int &size, int position) {
    // Move elements left
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--; // Reduce size
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5}; // Array with initial values
    int size = 5; // Current size

    cout << "Before operations: ";
    displayArray(arr, size);

    insertElement(arr, size, 99, 2); // Insert 99 at index 2
    cout << "After insertion: ";
    displayArray(arr, size);

    deleteElement(arr, size, 3); // Delete element at index 3
    cout << "After deletion: ";
    displayArray(arr, size);

    return 0;
}
