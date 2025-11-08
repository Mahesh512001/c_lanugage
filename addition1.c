#include<stdio.h>
int main()
{
    int a=10;
    int b=23;
    int c=0;
     c=add(a,b);
    printf("addition =%d\n",c);
    return 0;

}
int add(int no1,int no2)
{
   int ans=0;
   ans=no1+no2;
   return ans;

}