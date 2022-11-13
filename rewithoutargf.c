#include<stdio.h>
int add()
{
int a,b;
printf("\n Enter the value of A and B:");
scanf("%d%d",&a,&b);
return a+b;
}
int main()
{
int a;
a=add();
printf("\n Total        :%d",a);
return 0;
}


