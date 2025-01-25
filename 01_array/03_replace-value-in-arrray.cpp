#include<iostream>
using namespace std;
int main()
{
    int i;
    int arr[5];
    for(i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    for(i=5-1; i>2; i--)
    {
        arr[i]= arr[i-1];
    }
    arr[2]=8;
    for(i=0; i<5; i++)
    {
        cout<<arr[i];
    }
}