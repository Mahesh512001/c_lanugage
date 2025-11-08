#include<stdio.h>
//  siz of operater -----address of operater 
int main()
{
    int no=98;
    char ch='H';
    float fn=90.98;
    double dn=1234.56789;


    printf("value of no=%d\n",no); // integer format specifier---[%d]
    printf("value of ch=%c\n",ch); // charecter format specifier---[%c]
    printf("value of fn=%f\n",fn); // float format specifier---[%f]
    printf("value of dn=%lf\n\n",dn); // double format specifier---[%lf]


    printf("address of no=%d\n",&no);
    printf("address of ch=%d\n",&ch);
    printf("address of fn=%d\n",&fn);
    printf("address of dn=%d\n\n",&dn);


    printf("size of no=%d\n",(sizeof no));
    printf("size of ch=%d\n",(sizeof ch));
    printf("size of fn=%d\n",(sizeof fn));
    printf("size of dn=%d\n\n",(sizeof dn));
    return 0;
}