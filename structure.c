#include<stdio.h>
/*object creation at the end of decleration*/
struct demo
{
    int no;
    char ch;
    float fl;
    double dv;
}obj;

int main()
{
 obj.no=10;
 obj.ch='p';
 obj.fl=20.30;
 obj.dv=123.45678;
 printf("value of no=%d\n",obj.no);
 printf("value of ch=%c\n",obj.ch);
 printf("value of fl=%f\n",obj.fl);
 printf("value of dv=%lf\n",obj.dv);
 return 0;
}