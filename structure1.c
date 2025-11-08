#include<stdio.h>
/*object creation in main function*/
struct hello
{
    int a;
    char c;
    float f;
    double d;

};
int main()
{
    struct hello ob1;
    ob1.a=10;
    ob1.c='p';
    ob1.f=12.34;
    ob1.d=9087.4567;
    printf("value of a=%d\n",ob1.a);
    printf("value of c=%c\n",ob1.c);
    printf("value of f=%f\n",ob1.f);
    printf("value of d=%lf\n",ob1.d);
    return 0;

}