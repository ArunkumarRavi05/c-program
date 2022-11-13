#include<stdio.h>
int main()
{
float sp,cp,profit;
printf("\n Enter the selling price of 15 items:");
scanf("%f",&sp);
printf("\n Enter the profit amount of 15 items:");
scanf("%f",&profit);
cp=(sp-profit)/15;
printf("cost price of one item           %0.2f",cp);
return 0;
}

