#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5,total;
float avg;
printf("\n Enter 5 marks :");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
total=m1+m2+m3+m4+m5;
avg=total/5.0;
if(m1>=35 && m2>=35 && m3>=35 && m4>=35 && m5>=35)
{
printf("\n Result : Pass ");
}
if(avg>=90 && avg<=100)
{
printf("\n Grade : A ");
}
else if(avg>=89 && avg<=80)
{
printf("\n Grade : B ");
}
else if(avg>=79 && avg<=70)
{
printf("\n Grade : C ");
}
else
{
printf("\n Grade : D ");
}
}
else
{
printf("\n Result : Fail ");
printf("\n Grade : No grade ");
}
return 0;
}
