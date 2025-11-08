#include<stdio.h>
int recursion(ino)
{
    if(ino>0)
    {
        return ino+recursion(ino-1);
    }
    else{
        return 0;
    }
}
int main()
{
    int no=10;
    int ret=0;
    ret=recursion(no);
    printf("%d\n",ret);
    return 0;
}