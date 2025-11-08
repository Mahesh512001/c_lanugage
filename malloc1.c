#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size=0;
    int *ptr=NULL;

    printf("size you want for how many elements :");
    scanf("%d",&size);
    ptr=(int*)malloc(size*sizeof(int));
    if(ptr==NULL)
    {
        printf("memory not allocated\n");

    }
    else
    {
       printf("memory allocated successfully\n");
    }
    free(ptr);
    return 0;
}