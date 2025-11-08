#include<stdio.h>
int main()
{
    int num=90;
    int *p=&num;
    char ch='P';
    char *o=&ch;
    float f=90.90;
    float *i=&f;
    double d=987.12345;
    double *n=&d;

    printf("value of num=%d\n",num);
    printf("size of num=%d\n",sizeof(num));
    printf("address of num=%d\n",&num);
    printf("value of p=%d\n",p);
    printf("size of p=%d\n",sizeof(p));
    printf("address of p=%u\n\n",&p);

    printf("value of ch=%c\n",ch);
    printf("size of ch=%d\n",sizeof(ch));
    printf("address of ch=%d\n",&ch);
    printf("value of o=%d\n",o);
    printf("size of o=%d\n",sizeof(o));
    printf("address of o=%u\n\n",&o);

    printf("value of f=%f\n",f);
    printf("size of f=%d\n",sizeof(f));
    printf("address of f=%d\n",&f);
    printf("value of i=%d\n",i);
    printf("size of i=%d\n",sizeof(i));
    printf("address of i=%u\n\n",&i);

     printf("value of d=%lf\n",d);
    printf("size of d=%d\n",sizeof(d));
    printf("address of d=%d\n",&d);
    printf("value of n=%d\n",n);
    printf("size of n=%d\n",sizeof(n));
    printf("address of n=%u\n\n",&n);
    return 0;
}