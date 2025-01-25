#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int length= sizeof(arr)/sizeof(arr[0]);
    for(int i=length-1; i>0; i-- )
    {
        arr[i]= arr[i-1];
    }
    arr[0]= 0;
    printf("Final array: ");
    for(int i=0; i< length; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}