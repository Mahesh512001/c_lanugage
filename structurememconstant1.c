#include<stdio.h>
struct constant
{
    const int i;
     int j;
} cobj={11,21};
int main()
{
   printf("value of i=%d\n",cobj.i);
   //cobj.i++;
   printf("value of i=%d\n",cobj.i);
   printf("value of j=%d\n",cobj.j);
   cobj.j++;
   printf("value of j=%d\n",cobj.j);
   return 0;
}