#include<stdio.h>
#define LIMIT 5
#define MSG "Arun"
#define custom_message(a)\
printf("\n" #a "welcome to our institution");

int main()
{
for(int i=0;i<LIMIT;i++)
{
printf("\n %d",i);
}
printf("\n %s",MSG);
custom_message("Arun kumar");
printf("\n File name  :%s",__FILE__);
printf("\n Time       :%s",__TIME__);
printf("\n Line       :%d",__LINE__);
return 0;
}
