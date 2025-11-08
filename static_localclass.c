#include<stdio.h>
void demo()
{
    auto int num5=90;
    num5++;
    printf("value of num5=%d\n",num5);
}
float add()
{

    static int num8=890;
    num8++;

    printf("value of num8=%d\n",num8);

}
int main()
{
    demo();
    demo();
    add();
    add();
    return 0;
}