#include<stdio.h>
int main()
{
    int i;
    int arr[7]= {2,3,4,5,6,8};
    int element_found= 0;
    int num= 4;
    for(i = 0; i<7; i++)
    {
        if(num== arr[i])
        {
            element_found= 1;
            break;
        }
    }
    if (element_found == 1)
    {
        printf("found in index %d", i);
    }
    else
    {
        printf("not found");
    }
}
