#include<stdio.h>
int main()
{
    int istd=0;
    printf("Enter your standerd:");
    scanf("%d",&istd);
    if(istd==1)
    {
    printf("your exam start at 8am\n");
    }
    else if(istd==2)
    {
        printf("your exam start at 9am\n");
    }
    else if(istd==3)
    {
        printf("your exam start at 10am\n");
    }
    else if(istd==4)
    {
        printf("your exam start at 11am\n");
    }
    else if(istd==5)
    {
        printf("your exam start at 12am\n");
    }
    else
    printf("invalide standerd\n");
    return 0;
}