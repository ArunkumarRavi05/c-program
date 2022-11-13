#include<stdio.h>
int factorial(int i)
{
if(i<=1)
{
return 1;
}
return i*factorial(i-1);
}

int main()
{
printf("\n Foctorial of 5 is %d ",factorial(5));
return 0;
}
