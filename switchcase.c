#include<stdio.h>
int main()
{
    int istd=0;
    printf("Enter your standerd:\n");
    scanf("%d",&istd);
    switch(istd)
    {
    case1:
    printf("your exam start at 8am\n");
    break;
    case 2:
        printf("your exam start at 9am\n");
    break;
    case 3:
        printf("your exam start at 10am\n");
    break;
    
    case 4:
        printf("your exam start at 11am\n");
        break;
    
    case 5:
        printf("your exam start at 12am\n");
        break;
    default:
    printf("invalid standerd\n");
    }
    return 0;
}