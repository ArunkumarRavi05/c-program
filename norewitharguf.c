#include<stdio.h>
void add(int a,int b)
{
int c;
c=a+b;
printf("\n Total value :%d",c);
}
int main()
{
int x,y,i,n;
printf("\n Enter the limit :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter the value of X:");
scanf("%d",&x);
printf("\n Enter the value of Y:");
scanf("%d",&y);

add(x,y);
}
return 0;
}

