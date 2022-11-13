#include<stdio.h>
int main()
{
int a[100],i,n,e=0,o=0;
printf("\n Enter the limit :");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("\n Enter the value :");
scanf("%d",&a[i]);
a[i]/2==0?e++:o++;
}
printf("\n Total odd numbers  :%d",o);
printf("\n Total even numbers :%d",e);
return 0;
}
