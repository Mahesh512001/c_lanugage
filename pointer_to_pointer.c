#include<stdio.h>
int main()
{
    int num=21;
    int *p=&num;
    int **o=&p;
    int ***i=&o;
    int ****n=&i;
    int *****t=&n;
    int ******e=&t;
    int *******r=&e;

    printf("value of num=%d\n",num);
    printf("value of *p=%d\n",*p);
    printf("value of **o=%d\n",**o);
    printf("value of ***i=%d\n",***i);
    printf("value of ****n=%d\n",****n);
    printf("value of *****t=%d\n",*****t);
    printf("value of ******e=%d\n",******e);
    printf("value of *******r=%d\n",*******r);

    printf("value of p=%d\n",p);
    printf("value of o=%d\n",o);
    printf("value of i=%d\n",i);
    printf("value of n=%d\n",n);
    printf("value of t=%d\n",t);
    printf("value of e=%d\n",e);
    printf("value of r=%d\n",r);
    
    return 0;

}