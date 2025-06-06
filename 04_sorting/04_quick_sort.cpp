#include<iostream>
using namespace std;

int partition(int array[], int l, int h)
{
    int pivot= array[l];
    int i=l;
    int j=h; 

    while(i<j)
    {
        while(array[i]<=pivot)
        {
            i++;
        }
        while(array[j] > pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(array[i], array[j]);
        }
    }
        swap(array[l], array[j]);
        return j;
}


void Quick_sort(int array[], int l, int h)
{
    if(l<h)
    {
        int loc = partition(array,l,h);
        Quick_sort(array, l,loc-1);
        Quick_sort(array, loc+1, h);
    }
}

int main()
{
        int array[5]= {65,5, 3654, 89, 7};
        //int n= sizeof(array)/sizeof(array[0]);
        Quick_sort(array,0, 4);

        for(int i= 0; i<5; i++)
        {
            cout<< array[i]<<" ";
        }


}


