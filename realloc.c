#include<stdio.h>
#include<stdlib.h>
int main()
{
//void* realloc(void *ptr,size new_size)
int i,n;


int *ptr=(int *)malloc(3*sizeof(int));
if(ptr==NULL)
{
printf("\n Memory not available");
exit(1);
}
printf("\n Enter 3 numbers :");
for(i=0;i<3;i++)
{
scanf("%d",ptr+i);
}
ptr=(int*)realloc(ptr,5*sizeof(int));
for(i=3;i<5;i++)
{
scanf("%d",ptr+i);
}
for(i=0;i<5;i++)
{
printf("\n %d : %d",&ptr+i,*(ptr+i));
}
return 0;
}
