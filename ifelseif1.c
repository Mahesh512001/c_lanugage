#include<stdio.h>
int main()
{
    int marks=0;
    printf("Enter your marks:");
    scanf("%d",&marks);
    if(marks>=60)
    {
        printf(" passed in 1st class\n");

    }
    else if(marks<=60&&marks>=35)
    {
        printf(" passed in 2nd class\n");
    }
    else
    {
    printf("result is faield\n");
    }
    return 0;
}