#include<stdio.h>
int main()
{
float km,m,ft,in,cm;
printf("\n Enter the Kilometers :");
scanf("%f",&km);
m=km*1000;
cm=m*100;
in=cm/2.54;
ft=in/12;
printf("\n Meters :%0.2f",m);
printf("\n Centieters :%0.2f",cm);
printf("\n Inches :%0.2f",in);
printf("\n Feet :%0.2f",ft);

return 0;
}
