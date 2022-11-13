#include<stdio.h>
int main()
{
int pop=80000,menpop,womenpop,totallit,litmen,litwomen,illitmen,illitwomen;
printf("\n Total population         :%d",pop);
menpop=pop*0.52;
womenpop=pop*0.48;
printf("\n Men population           :%d",menpop);
printf("\n Women population         :%d",womenpop);
totallit=pop*0.48;
litmen=pop*0.35;
litwomen=totallit-litmen;
printf("\n Total litracy            :%d",totallit);
printf("\n Men litracy              :%d",litmen);
printf("\n Women litracy            :%d",litwomen);
illitmen=menpop-litmen;
illitwomen=womenpop-litwomen;
printf("\n Illitrate men            :%d",illitmen);
printf("\n illitrate women          :%d",illitwomen);
return 0;
}


