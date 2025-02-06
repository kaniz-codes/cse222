#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

void selectionsort(int array[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int temp=i;

        for(int j= i+1; j<n;j++)
        {
            if(array[temp]>array[j])
            {
                temp = j;
            }
        }
        swap(array[temp], array[i]);
    }
}
int main()
{
    int array[5]={1,5, 56, 6, 9};
    int n= sizeof(array)/sizeof(array[0]);
    selectionsort(array, n);

    for(int i= 0; i<5; i++)
    {
        cout<< array[i]<<" ";
    }
}

