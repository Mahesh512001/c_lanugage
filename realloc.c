#include<stdio.h>
#include<stdlib.h>
int main()
{
    int old_size=0;
    int *ptr=NULL;
    int new_size=0;
    printf("size you want for how many elements :");
    scanf("%d",&old_size);
    ptr=(int*)malloc(old_size*sizeof(int));
    if(ptr==NULL)
    {
        printf("memory not allocated\n");

    }
    else
    {
       printf("memory allocated successfully\n");
    }
    printf("enter the new size=");
      scanf("%d",&new_size);
       ptr=(int*)realloc(ptr,new_size*sizeof(int));
      if(ptr==NULL)
    {
        printf("memory does not allocated\n");

    }
    else
    {
        printf("memory gets allocated successfully\n");
    }
    free(ptr);
    return 0;
}