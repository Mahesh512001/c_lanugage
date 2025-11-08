#include<stdio.h>
int main()
{
    int arr[2][3];
    // arr is two dimentional array,which contain 2 one dimentional array.
    // each one dimentional array contains 3 elements
    // that are type of integer
    arr[0][0]=100;
    arr[0][1]=200;
    arr[0][2]=300;
    arr[1][0]=101;
    arr[1][1]=201;
    arr[1][2]=301;
    printf("value of arr[0][0]=%d\n",arr[0][0]);
    printf("value of arr[0][1]=%d\n",arr[0][1]);
    printf("value of arr[0][2]=%d\n",arr[0][2]);          
    printf("value of arr[1][0]=%d\n",arr[1][0]);
    printf("value of arr[1][1]=%d\n",arr[1][1]);
    printf("value of  arr[1][2]=%d\n", arr[1][2]);
    return 0;
}