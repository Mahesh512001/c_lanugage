#include<stdio.h>
int main()
{
    int marks=0;

    printf("Enter your marks:");
    scanf("%d",&marks);

    if(marks>=60)
    {
        printf("Your passed in 1st class\n");
    }
    else
    
        printf("Your passed in 2nd class\n");
    
    return 0;
}