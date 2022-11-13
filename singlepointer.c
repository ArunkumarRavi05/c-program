#include<stdio.h>
int main()
{
int a=10,*p;
p=&a;
printf("\n value of A           :%d",a);
printf("\n Address of A         :%d",&a);
printf("\n value of p           :%d",p);
printf("\n Address of p         :%d",&p);
printf("\n Dereferancing of *p  :%d",*p);
return 0;
}
