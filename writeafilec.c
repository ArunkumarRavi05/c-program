#include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("sample.txt","w");
fprintf("\n Today is wednesday.");
fclose(fp);
return 0;
}
/* To append
FILE *fp;
fp=fopen("sample.txt","a");
fprintf("\n Yes Today is wednesday.");
fclose(fp);*/
