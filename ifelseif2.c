#include<stdio.h>
int main()
{
   auto int age=0;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=0&&age<=10)
    {
      printf("your ticket prize is :RS 100\n");
    }
    else if(age>10&&age<=40)
    {
        printf("Your ticket prize is :RS 500\n");
    }
    else if(age>40)
    {
        printf("Your ticket prize is : RS 300\n");
    }
    return 0;
}  