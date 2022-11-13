#include<stdio.h>
void swapping(int *x,int *y)
{
int temp=*x;
*x=*y;
*y=temp;
return 0;
}
int main()
{
int c,d,t;
printf("\nEnter 2 numbers:\n");
scanf("%d%d",&c,&d);
printf("\nBefore swapping:\n");
printf("\nC: %d D: %d\n",c,d);
swapping(&c,&d);
printf("\nAfter swapping:\n");
printf("\nC: %d D: %d\n",c,d);
return 0;
}
