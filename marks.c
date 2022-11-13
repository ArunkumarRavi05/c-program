#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5;
float agg,per;
printf("\n Enter 5 marks :");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
agg=m1+m2+m3+m4+m5;
per=agg/5;
printf("\n Total marks :%0.2f",agg);
printf("\n Percentage of marks :%0.2f",per);
return 0;
}

