
//STRUCTURE  ARRAY
#include<stdio.h>
struct structarray
{
    int arr[3];
    float frr[3];
};
int main()
{
    struct structarray sobj;
    sobj.arr[0]=11;
    sobj.arr[1]=21;
    sobj.arr[2]=31;
    sobj.frr[0]=21.34;
    sobj.frr[1]=32.45;
    sobj.frr[2]=89.98;
    printf("value of arr[0]=%d\n",sobj.arr[0]);
    printf("value of arr[1]=%d\n",sobj.arr[1]);
    printf("value of arr[2]=%d\n",sobj.arr[2]);
    printf("value of frr[0]=%f\n",sobj.frr[0]);
    printf("value of frr[1]=%f\n",sobj.frr[1]);
    printf("value of frr[2]=%f\n",sobj.frr[2]);
    
    return 0;
}