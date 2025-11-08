#include<stdio.h>
int main()
{
    int arr[11]={11,12,13,14,15,16,17,18,19,20,21};
    int *p=arr+10;
    int *i=arr+2;
printf("value of p=%d\n",p);  //6422292
printf("value of i=%d\n",i);  //6422260
p=p-i;                        //p=6422292-6422260/4-----32/4=8
printf("value of p=%d\n",p);  //[8] index  left from pointer
return 0;
}