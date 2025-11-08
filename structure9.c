// pointer inside structure
#include<stdio.h>
struct hello
{
    int *ptr;
    float *ftr;
}obb;
int main()
{
    int no=10;
    float fno=23.33;
    obb.ptr=&no;
    obb.ftr=&fno;
    printf("value of no=%d\n",*(obb.ptr));
    printf("address of no=%u\n",obb.ptr);
    printf("value of no=%f\n",*(obb.ftr));
    printf("address of no=%u\n",obb.ftr);
    return 0;
    

}