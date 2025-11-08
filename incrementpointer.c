#include<stdio.h>
int main()
{
    int brr[4]={11,22,33,44};
    int *p=brr+2;
    printf("*p=%d\n",*p);
     printf("p=%d\n",p);
     p++;
     printf("*p=%d\n",*p);
     printf("p=%d\n",p);
     return 0;

}