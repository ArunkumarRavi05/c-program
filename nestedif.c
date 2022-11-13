#include<stdio.h>
int main()
{
int year;
printf("\n Enter the year :");
scanf("%d",&year);
if(year%100==0)
{
if(year%400==0)
{
printf("\n Year is leap year");
}else
{
printf("\n Year is not leap year");
}
}
else{
if(year%4==0)
{
printf("\n Year is leap year");
}else
{
printf("\n Year is not leap year");
}
}
return 0;
}
