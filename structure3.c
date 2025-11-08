
//member by member initiallization list
#include<stdio.h>
#include<string.h>
struct membymem
{
    int n;
    char c[10];
    float f;
    double d;
};
int main()
{
    struct membymem obj;
    obj.n=11;
    obj.c[10] = "harshad";
    obj.f=23.45;
    obj.d=9087.232113;
    printf("value of n=%d\n",obj.n);
    printf("value of c=%s\n",obj.c);
    printf("value of f=%f\n",obj.f);
    printf("value of d=%lf\n",obj.d);
    return 0;
}