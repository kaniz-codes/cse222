#include<stdio.h>
int main()
{
    int arr[10] = {1, 2, 2, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    int del;

    printf("Enter the number to delete: ");
    scanf("%d", &del);

    for (int i = 0; i < length; i++) 
    {
        if (arr[i] == del) {
            
            for (int j = i; j < length - 1; j++) 
            {
                arr[j] = arr[j + 1];
            }
            i--; 
        }
    }

    printf("Final array: ");
    for (int i = 0; i < length; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
