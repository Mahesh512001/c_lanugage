
//structure obj array

#include<stdio.h>
struct structobjarray
{
    int ino;
    float fvalue;
    int ivalue;
};
int main()
{
    struct structobjarray arr[4];
    arr[0].ino=11;
    arr[0].fvalue=34.56;
    arr[0].ivalue=456;
    arr[1].ino=12;
    arr[1].fvalue=35.78;
    arr[1].ivalue=786;
    printf("value of arr[0].ino=%d\n",arr[0].ino);
    printf("value of arr[0].ino=%f\n",arr[0].fvalue);
    printf("value of arr[0].ino=%d\n",arr[0].ivalue);
    printf("value of arr[1].ino=%d\n",arr[1].ino);
    printf("value of arr[1].ino=%f\n",arr[1].fvalue);
    printf("value of arr[1].ino=%d\n",arr[1].ivalue);
    return 0;
}