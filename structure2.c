
// member initiallization list

#include<stdio.h>
struct inilist
{
    int no;
    char cr;
    float fno;
    double dno;
};
int main()
{
    struct inilist obb={10,'P',11.12,9087.678543};
    printf("value of no=%d\n",obb.no);
    printf("value of cr=%c\n",obb.cr);
    printf("value of fno=%f\n",obb.fno);
    printf("value of dno=%lf\n",obb.dno);
    return 0;

}