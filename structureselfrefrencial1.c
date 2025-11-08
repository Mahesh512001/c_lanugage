// SELF REFRENCIAL STRUCTURE
#include<stdio.h>
struct demo
{
    int rollno;
    struct demo *ptr;
};
int main()
{
    struct demo obj1,obj2,obj3;
    obj1.rollno=10;
    obj1.ptr=&obj2;
    obj2.rollno=11;
    obj2.ptr=&obj3;
    obj3.rollno=13;
    obj3.ptr=NULL;

    printf("value of obj1 roll no=%d\n",obj1.rollno);
    printf("value of obj2 roll no=%d\n",obj2.rollno);
    printf("value of obj3 roll no=%d\n",obj3.rollno);
    
   

    return 0;
}
