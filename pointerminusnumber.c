#include<stdio.h>
int main()
{
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int *o=arr+9;                             //*o =100.         
    printf("value of o=%d\n",o);          //address of 9th index.--6356760
     printf("value of *o=%d\n\n",*o);         //100
    o=o-1;                              //it slide 1 index backward from o value.----o=6356760-1(index)         
    printf("value of o=%d\n",o);          //address of 8th index.--6356756
    printf("value of *o=%d\n\n",*o);          //90
    o=o-1;                                  //it slide 1 index backward----o=6356756-1(index).
    printf("value of o=%d\n",o);          //address of 7th index.--6356752
    printf("value of *o=%d\n\n",*o);          //80
    o=o-1;                                  //it slide 1 index backward.----o=6356752-1(index).
    printf("value of o=%d\n",o);          //address of 6th index.--6356748
     printf("value of *o=%d\n\n",*o);         //70        
    o=o-1;                                  //it slide 1 index backward.----o=6356748-1(index).
    printf("value of o=%d\n",o);          //address of 5th index----6356744
    printf("value of *o=%d\n\n",*o);          //60        



    

    return 0;
}