#include<stdio.h>
#include<string.h>
#pragma pack(1)

struct demo
{
    int a;
    char c[9];

} ;

int main()
{
    struct demo obj={12, "HARSHAD"};

    printf("value of a=%d\n",obj.a);
    printf("value of c=%s\n",obj.c);
    printf("size of a=%d\n",sizeof(obj.a));
    printf("size of c=%d\n",sizeof(obj.c));
    printf("size of obj=%d\n",sizeof(obj));
    return 0;
}