//structure array decleration

#include<stdio.h>
struct demo
{
int arr[4];
float frr[2];
}obj;

int main()
{
    obj.arr[0]=11;
    obj.arr[1]=21;
    obj.arr[2]=31;
    obj.arr[3]=41;

    obj.frr[0]=10.20;
    obj.frr[1]=20.30;
    printf("value of arr 0=%d\n",obj.arr[0]);
    printf("value of arr 1=%d\n",obj.arr[1]);
    printf("value of arr 2=%d\n",obj.arr[2]);
    printf("value of arr 3=%d\n",obj.arr[3]);

    printf("value of frr 0=%f\n",obj.frr[0]);
    printf("value of frr 1=%f\n",obj.frr[1]);
    return 0;
}