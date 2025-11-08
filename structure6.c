
//structure pointer

//  pointer join to object
#include<stdio.h>

struct structptr
{
    int ivalue;

    float fvalue;
};

int main()
{
    struct structptr obj1;

    struct structptr *ptr =&obj1 ;

    ptr->ivalue = 11;
    ptr->fvalue = 10.34;

    printf("%d\n",ptr->ivalue);
    printf("value of fvalue=%f\n",ptr->fvalue);
    printf("%u\n",ptr);



    return 0;
}
