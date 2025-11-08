#include<stdio.h>
int main()
{
    const no=20;
   const int *const p=&no;
    int const*const p=&no;

printf("value of no=%d\n",no);
printf("value of *p=%d\n",*p);
printf("address of no[p]=%u\n",p);
no++;  //compiler gets error due to const keyword the increment not allowed 
printf("value of no=%d\n",no);
(*p)++;
printf("value of *p=%d\n",*p);
no=21; 
printf("value of no=%d\n",no);
p++;
printf("address of no=%u\n",p);
return 0;
}