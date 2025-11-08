#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter the no upto we want to print:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("The numbers are as:%d\n",i);
        sum=sum+i;
    }
    printf("Addition is:%d",sum);
}