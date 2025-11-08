
 //first way
#include<stdio.h>
struct demo
{
    int i;
    float f;
};
struct hello
{
    char c;
    double d;
    struct demo obj;
}obb;
int main()
{
    obb.c='p';
    obb.d=324.5532;
    obb.obj.i=21;
    obb.obj.f=32.34;
    printf("value of c=%c\n",obb.c);
    printf("value of d=%lf\n",obb.d);
    printf("value of i=%d\n",obb.obj.i);
    printf("value of f=%f\n",obb.obj.f);
    return 0;
}