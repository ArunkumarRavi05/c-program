#include<stdio.h>
int main()
{
int totalpop=80000,totalmen,totalwomen,totallit,litmen,litwomen,illitmen,illitwomen;
printf("\n Total Population  :%d",totalpop);
totalmen=totalpop*0.52;
printf("\n Total Men         :%d",totalmen);
totalwomen=totalpop*0.48;
printf("\n Total women       :%d",totalwomen);
totallit=totalpop*0.48;
printf("\n Total Litracy     :%d",totallit);
litmen=totalpop*0.35;
printf("\n Litrate Men       :%d",litmen);
litwomen=totallit-litmen;
printf("\n Litrate Women     :%d",litwomen);
illitmen=totalmen-litmen;
printf("\n Illitrate Men     :%d",illitmen);
illitwomen=totalwomen-litwomen;
printf("\n Illitrate Men     :%d",illitwomen);
return 0;
}
