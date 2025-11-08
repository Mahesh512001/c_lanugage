
// member initiallization list and address of elementd
#include<stdio.h>
int main()
{
    
    int arr[5]={10,20,30,40,50};

    printf("value of index 0=%d\n",arr[0]);
    printf("value of index 1=%d\n",arr[1]);
    printf("value of index 2=%d\n",arr[3]);
    printf("value of index 4=%d\n\n",arr[4]);

    printf("address of 0=%u\n",arr);
    printf("address of 1=%u\n",arr+1);
    printf("address of 2=%u\n",arr+2);
    printf("address of 3=%u\n",arr+3);
    printf("address of 4=%u\n",arr+4);

    return 0;
}