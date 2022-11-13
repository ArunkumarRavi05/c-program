#include<stdio.h>
int add(int a,int b)//Formal parameter
{

return a+b;
}
int main()
{

int a,b;
printf("\n Enter the value of A and B:");
scanf("%d%d",&a,&b);//Actual parameter
a=add(a,b);
printf("\n Total        :%d",a);
return 0;
}


