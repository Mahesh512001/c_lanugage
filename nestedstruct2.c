//secound way
#include<stdio.h>
struct demo
{
    int i;
    float f;

struct hello
{
    char c;
    double d;
    
}obb;
}obj;
int main()
{

    obj.obb.c='p';
    obj.obb.d=324.5532;
    obj.i=21;
    obj.f=32.34;
    printf("value of c=%c\n",obj.obb.c);
    printf("value of d=%lf\n",obj.obb.d);
    printf("value of i=%d\n",obj.i);
    printf("value of f=%f\n",obj.f);
    return 0;
}