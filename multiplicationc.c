#include<stdio.h>
int main()
{
int i,t,n;
printf("\n Enter the table name :");
scanf("%d",&t);
printf("\n Enter the limit :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n %d X %d =%d",t,i,t*i);
}
return 0;
}
