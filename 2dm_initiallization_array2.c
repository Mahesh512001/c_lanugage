
  //  Two dimentional array initiallization and size of array
#include<stdio.h>
int main()
{
    int arr[2][3];
    arr[0][0]=101;
    arr[0][1]=102;
    arr[0][2]=103;
    arr[1][0]=201;
    arr[1][1]=202;
    arr[1][2]=203;

    printf("value of narr[0][0]=%d\n",arr[0][0]);
    printf("value of arr[0][1]=%d\n",arr[0][1]);
     printf("value of arr[0][2]=%d\n",arr[0][2]);          
    printf("value of arr[1][0]=%d\n",arr[1][0]);
    printf("value of arr[1][1]=%d\n",arr[1][1]);
    printf("value of  arr[1][2]=%d\n\n", arr[1][2]);
    printf("size of array=%d\n",sizeof(arr));
    return 0;
}