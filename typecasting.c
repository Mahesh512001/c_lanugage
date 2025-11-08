#include<stdio.h>
int main()
{
    int ivalue=11;
    char cvalue='P';
    float fvalue=2.3;
    double dvalue=908.12345;
    void *ptr=NULL;
    ptr=&ivalue;
    printf("%d\n",*(int*)ptr);
    ptr=&cvalue;
    printf("%c\n",*(char*)ptr);
    ptr=&fvalue;
    printf("%f\n",*(float*)ptr);
    ptr=&dvalue;
    printf("%lf\n",*(double*)ptr);
    return 0;
}