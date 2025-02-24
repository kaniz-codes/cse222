#include<iostream>
using namespace std;

void insertionsort(int array[], int n)
{
    for(int i=1; i<n; i++)
    {
        int temp = array[i];
        int j=i-1;

        while(j>=0 && array[j]>temp)
        {
            array[j+1]= array[j];
            j--;
        }
        array[j+1] = temp;
    }
}
int main()
{
    int array[5]={1,5, 56, 6, 9};
    int n= sizeof(array)/sizeof(array[0]);
    insertionsort(array, n);

    for(int i= 0; i<5; i++)
    {
        cout<< array[i]<<" ";
    }
}

