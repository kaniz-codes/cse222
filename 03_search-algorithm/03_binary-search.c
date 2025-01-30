#include<stdio.h>

int binary_search(int a[], int data, int n)
    {

        int l=0;
        int r= n-1;
        int mid;
        while(l<r)
        {
            mid= (l+r)/2;

            if(a[mid] == data)
            {
                return mid;
            }
            else if( a[mid] < data)
            {
                l=mid -1;
            }
            else
            {
                r= mid +1;
            }
        }
        return -1;
    }
int main()
{
    int a[]= {1,2,3,4,5,6,7};
    //int data= 5;
    int n = sizeof(a)/sizeof(a[0]);
    printf("%d",  binary_search(a, 5, n));
}


