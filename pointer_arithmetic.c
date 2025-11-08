#include<stdio.h>
int main()
{
    int arr[8]={10,20,30,40,50,60,70,80};
    int *p=&arr;
    printf("value of p=%d\n",p);
    printf("value of *p=%d\n",*p);
    p=p+2*(2);
     printf("value of p=%d\n",p);
     printf("value of *p=%d\n",*p);
    

    
    return 0;
}