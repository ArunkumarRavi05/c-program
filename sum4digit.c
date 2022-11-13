#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g;
printf("\nEnter 4 digit number :");
scanf("%d",&a);
b=a/10;//123
c=a%10;//4
d=b/10;//12
e=b%10;//3
f=d/10;//1
g=c+f;
printf("\n Sum of 1st and 4th digit  : %d",g);
return 0;
}
