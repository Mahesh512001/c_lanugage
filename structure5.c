
//  pointer join to object

#include<stdio.h>

struct list
{
    int n;
    char c;
    float f;
    double d;
};



int main()
{
   struct list obj;

   struct list *ptr = &obj;

   ptr-> n = 12;
   ptr-> c='P';
   ptr-> f=875.65;
   ptr-> d=3455555.543565667;

   printf("value of n=%d\n",ptr->n);
   printf("value of c=%c\n",ptr->c);
   printf("value of f=%f\n",ptr->f);
   printf("value of d=%lf\n",ptr->d);
   printf("address of obj=%u\n",ptr);
   
   
   return 0;
}

    
