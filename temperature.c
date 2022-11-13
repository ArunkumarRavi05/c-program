
#include<stdio.h>
int main()
{
float fr,cg;
printf("\nEnter the Fahrenheit:");
scanf("%f",&fr);
cg=(fr-32)*(5.0/9.0);
printf("\n Temperature in centigrade : %0.2f",cg);
return 0;
}
