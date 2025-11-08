#include<stdio.h>
#include<string.h>
union hello
{
    
    float fno;
    int value;
    char c[10];
};
int main()
{
    union hello hobj;
    hobj.fno=21.34;
    hobj.value =34;
    strcpy(hobj.c,"it's harshad");

     printf("memory allocated for object hobj=%d\n",sizeof(hobj));
     printf("value of fno=%f\n",hobj.fno);
     printf("value of value =%d\n",hobj.value);
     printf("value of string=%s\n",hobj.c);

    return 0;
}

