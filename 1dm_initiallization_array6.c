
  //   member initiallization list , address of element & size of array
#include<stdio.h>
int main()
{
    int brr[]={70,71,71,73};
    // arr is one or single dimentional array which contains 4 elements.
    //each element is of type integer.
    printf("value of 0th index=%d\n",brr[0]);
    printf("value of 1st index=%d\n",brr[1]);
    printf("value of 2nd index=%d\n",brr[2]);
    printf("value of 3rd index=%d\n\n",brr[3]);

    printf("address of oth index=%u\n",brr);
    printf("address of 1st index=%u\n",brr+1);
    printf("address of 2nd index=%u\n",brr+2);
    printf("address of 3rd index=%u\n\n",brr+3);

    printf("size of array=%d\n",sizeof(brr));

    return 0;
}