#include<stdio.h>
int main()
{
    int a=30,b=20;
    int ret=0;

    int addition(int,int);               //decleration of function
    int (*fptr)(int,int)=addition;                 //decleration of function pointer
    // fptr=addition;                       // assining address of 'addition' function to 'fptr' pointer
    ret=addition(a,b);                   //function call
    //fptr=addition;                       // assining address of 'addition' function to 'fptr' pointer
    printf("addition of two no:%d\n",ret);
    printf("address of addition function=%u\n",fptr);
    printf("\n");

    int sub(int,int);
    int (*ptr)(int,int);
    fptr=sub;
    ret=sub(a,b);
    ptr=sub;
    printf("value of sub=%d\n",ret);
    printf("address of sub function=%u\n",ptr);
    printf("\n");
    return 0;
}
int addition(int value1,int value2)
{
    int ans=0;
    ans=value1+value2;
    return ans;
}
int sub(int no1,int no2)
{
    int ans=0;
    ans=no1-no2;
    return ans;

}

