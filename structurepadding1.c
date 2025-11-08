
   
#include<stdio.h>
#pragma pack(1)
struct demo
{
    int ivalue;
    char cvalue;
    float fvalue;
    double dvalue;

}dobj;
int main()
{
    dobj.ivalue=11;
    dobj.cvalue='h';
    dobj.fvalue=11.14;
    dobj.dvalue=33.8779865;
    printf("value of ivalue=%d\n",dobj.ivalue);
    printf("value of cvalue=%c\n",dobj.cvalue);
    printf("value of fvalue=%f\n",dobj.fvalue);
    printf("value of dvalue=%lf\n\n",dobj.dvalue);
    
    printf("size of object=%d\n",sizeof(dobj));
     return 0;
}