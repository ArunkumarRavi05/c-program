#include<stdio.h>
int main()
{
int a,b,c,result,d,e,f,g,h,i;
printf("\nEnter 5 digit number :");
scanf("%d",&a);
b=a/10;//1234
c=a%10;//5
//sum+=c;//sum=sum+5
d=b/10;//123
e=b%10;//4
//sum+=e;
f=d/10;//12
g=d%10;//3
//sum+=g;
h=f/10;//1
//sum+=h;
i=f%10;//2
//sum+=i;
result=(c*10000)+(e*1000)+(g*100)+(i*10)+h;
printf("\n Reverse of 5 digit number : %d",result);
return 0;
}

