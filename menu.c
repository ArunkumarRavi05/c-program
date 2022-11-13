
#include<stdio.h>
int main()
{
int c,qty,n,net=0;
arun:
printf("\n\t\t MENU CARD:");
printf("\n\t\t 1.COFFEE             :Rs.15");
printf("\n\t\t 2.TEA                :Rs.10");
printf("\n\t\t 3.COLD COFFEE        :Rs.25");
printf("\n\t\t 4.MILK SHAKE         :Rs.50");
printf("\n Enter your choice :");
scanf("%d",&c);
switch(c)
{
case 1:
printf("\n You have selected coffee");
printf("\n Enter the qantity :");
scanf("%d",&qty);
net+=(qty*15);
break;
case 2:
printf("\n You have selected tea");
printf("\n Enter the qantity :");
scanf("%d",&qty);
net+=(qty*10);
break;
case 3:
printf("\n You have selected cold coffee");
printf("\n Enter the qantity :");
scanf("%d",&qty);
net+=(qty*25);
break;
case 4:
printf("\n You have selected milk shake");
printf("\n Enter the qantity :");
scanf("%d",&qty);
net+=(qty*50);
break;
default:
printf("\n Invalid selection");
break;
}
printf("\n Do you want to continue? Press 1 :");
scanf("%d",&n);
if(n==1)
{
goto arun;
}else
{
printf("\n Thankyou come again!");
printf("\n Total amount :%d",net);

}

return 0;
}
