#include<stdio.h>
int main()
{
    // member by member initiallization
    int arr[4];
   // arr is one or single dimentional array which contains 4 elements.
    //each element is of type integer.
    arr[0]=40 ;
    arr[1]=30 ;
    arr[2]=20;
    arr[3]=10 ;
    printf("value of 0th index=%d\n",arr[-0]);
    printf("value of 1st index=%d\n",arr[1]);
    printf("value of 2nd index=%d\n",arr[2]);
    printf("value of 3rd index=%d\n",arr[3]);
    return 0;
}