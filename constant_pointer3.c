#include<stdio.h>
int main()
{
    int no=10;
    int *const p=&no;
printf("value of no=%d\n",no);
printf("value of *p=%d\n",*p);
printf("address of no[p]=%u\n",p);
no++;  
printf("value of no=%d\n",no);
(*p)++;
printf("value of *p=%d\n",*p);
no=21; 
printf("value of no=%d\n",no);
p++;// eeror in increment of address
printf("address of no=%u\n",p);
return 0;
}