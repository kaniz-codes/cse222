#include<iostream>
using namespace std;

void bubblesort(int array[], int n)
{
    for(int i=0; i<n-1; i++)
    {

        for(int j= 0; j<n-1; j++)
        {
            if(array[j]> array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
int main()
{
    int array[5]={1,5, 56, 6, 9};
    int n= sizeof(array)/sizeof(array[0]);
    bubblesort(array, n);

    for(int i= 0; i<5; i++)
    {
        //cout<<"Array: ";
        cout<< array[i]<<" ";
    }
}
