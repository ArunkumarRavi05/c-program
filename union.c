#include<stdio.h>
#include<stdlib.h>
struct demo
{
int a;
char b;
};

union demo
{
int a;
char b;
}o;

int main()
{
/*printf("\n Size of integer     :%d",sizeof(int));
printf("\n Size of char        :%d",sizeof(char));
printf("\n Size of struct      :%d",sizeof(struct demo));
printf("\n Size of union       :%d",sizeof(union demo));*/
o.a=65;
printf("\n Union A : %d",o.a);
printf("\n Union B : %c",o.b);
return 0;
}
