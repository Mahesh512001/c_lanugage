#include<stdio.h>
int main()
{
    int arr[4]={11,21,31,41};
    int *p=&arr;
     int *o=&arr[1];
    int *i=&arr[2];
    int *n=&arr[3];
    printf("value of arr[0]=%d\n",arr[0]);
    printf("value of arr[1]=%d\n",arr[1]);
    printf("value of arr[2]=%d\n",arr[2]);
    printf("value of arr[3]=%d\n\n",arr[3]);

    printf("value of *p=%d\n",*p);
    printf("value of *o=%d\n",*o);
    printf("value of *i=%d\n",*i);
    printf("value of *n=%d\n\n",*n);

    printf("value of p=%d\n",p);
    printf("value of o=%d\n",o);
    printf("value of i=%d\n",i);
    printf("value of n=%d\n\n",n);

    printf("address of arr[0]=%d\n",&arr[0]);
    printf("address of arr[1]=%d\n",&arr[1]);
    printf("address of arr[2]=%d\n",&arr[2]);
    printf("address of arr[3]=%d\n\n",&arr[3]);

    printf("value of arr=%d\n",arr);
    printf("value of arr+1=%d\n",arr+1);
    printf("value of arr+2=%d\n",arr+2);
    printf("value of arr+3=%d\n\n",arr+3);
    return 0;
}