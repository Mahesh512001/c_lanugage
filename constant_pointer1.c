#include<stdio.h>
int main()
{
int no=11;
int *p=&no;
printf("value of no=%d\n",no);
printf("value of no=%d\n",*p);
printf("address of no=%u\n",p);
no++;
printf("value of no=%d\n",no);
(*p)++;
printf("value of no=%d\n",*p);
no=21;
printf("value of no=%d\n",no);
p++;
printf("address of no=%u\n",p);


return 0;
}