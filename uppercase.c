#include<stdio.h>
int main()
{
char a[100];
int i;
printf("\n Enter the string :");
gets(a);
for(i=0;a[i]!='\0';i++)
{                         //for lower case
if(a[i]>=97 && a[i]<=122)//if(a[i]>=65 && a[i]<=90)
{
a[i]=a[i]-32;           //a[i]=a[i]-32;
}
}
puts(a);
return 0;
}
