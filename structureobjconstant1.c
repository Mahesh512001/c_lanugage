#include<stdio.h>
struct hello
{
    int i;
    int j;
}const hobj={11,21};
int main()
{
   //const struct hello hobj={11,21};
    hobj.i++;
    printf("value of i++=%d\n",hobj.i);
    hobj.j++;
    printf("value of j++=%d\n",hobj.j);
    return 0;
}                