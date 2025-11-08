#include<stdio.h>
int main()
{
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int *o=arr;                             //*o =10.         
    printf("value of o=%d\n",o);          //address of 0th index.--100
     printf("value of *o=%d\n\n",*o);         //10
    o=o+1;                                  //it slide 1 index forward from o value.----o=100+1(index)         
    printf("value of o=%d\n",o);          //address of 1st index.--104
    printf("value of *o=%d\n\n",*o);          //20
    o=o+1;                                  //it slide 1 index forward.----o=104+1(index).
    printf("value of o=%d\n",o);          //address of 2nd index.--108
    printf("value of *o=%d\n\n",*o);          //30              
    o=o+1;                                  //it slide 1 index forward.----o=108+1(index).
    printf("value of o=%d\n",o);          //address of 3rd index.--112
     printf("value of *o=%d\n\n",*o);         //40             
    o=o+1;                                  //it slide 1 index forward.----o=112+1(index).
    printf("value of o=%d\n",o);          //address of 4th index---116
    printf("value of *o=%d\n\n",*o);          //50         



    

    return 0;
}