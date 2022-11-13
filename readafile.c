#include<stdio.h>
int main()
{
FILE *fp;
char c;
fp=fopen("sample.txt","r");
if(fp=NULL)
{
printf("\n File not found.");
}
while(1)
{
c=fgets(fp);
if(c==EOF)
break;
printf(" %c ",c);
}
return 0;
}
