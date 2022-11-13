#include<stdio.h>
#include<string.h>
int main()
{
char a[20],c[20];
char x[10]={'R','A','M','\0'};
char y[10]={'K','U','M','A','R','\0'};
printf("\n X : %s",x);
printf("\n Y : %s",y);
printf("\n Enter the string :");
gets(c);//gets() function is used to store the string in c variable.
printf("\n String Compare           :%d",strcmp(x,c));
printf("\n String Length            :%d:",strlen(c));
printf("\n String Reverse           :%s",str_rev(c));
/*printf("\n String Uppercase         %s:",strupr(c));
printf("\n String Lowercase         %s:",strlwr(c));*/
printf("\n String Copy              :%s",strcpy(a,c));
strcat(x,y);
printf("\n String Concatination     :%s",x);
return 0;
}
