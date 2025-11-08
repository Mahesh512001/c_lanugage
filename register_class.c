#include<stdio.h>
// the register storage class only applicable for integer & character.
void demo()
{
    int num=23;
    register int num1=45;
  
    printf("value of num=%d\n",num);
    printf("value of num1=%d\n",num1);
   
}
int main()
{
    demo();
    return 0;
}