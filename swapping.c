#include<stdio.h>
int main()
{
int c,d,t;
printf("\nEnter 2 numbers:\n");
scanf("%d%d",&c,&d);
printf("\nBefore swapping:\n");
printf("\nc: %d d: %d\n",c,d);
t=c;
c=d;
d=t;
printf("\nAfter swapping:\n");
printf("\nc: %d d: %d\n",c,d);
return 0;
}
