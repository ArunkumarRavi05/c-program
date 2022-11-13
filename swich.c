#include<stdio.h>
int main()
{
int ch;
printf("\n Enter the value :");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\n One");
break;
case 2:
printf("\n Two");
break;
case 3:
printf("\n Three");
break;
default:
printf("\n Invalid");
break;
}
return 0;
}
