
//member by member initiallization and address of elements
#include<stdio.h>
int main()
{
    int arr[4];
    arr[0]=100;
    arr[1]=101;
    arr[2]=102;
    arr[3]=103;
    printf("value of 0th index=%d\n",arr[0]);
    printf("value of 1st index=%d\n",arr[1]);
    printf("value of 2nd index=%d\n",arr[2]);
    printf("value of 3rd index=%d\n\n",arr[3]);

   printf("address of 0th index=%u\n",arr);
   printf("address of 1st index=%u\n",arr+1);
   printf("address of 2nd index=%u\n",arr+2);
   printf("address of 3rd index=%u\n\n",arr+3);
    
printf("size of array=%d\n",sizeof(arr));
  return 0;

}