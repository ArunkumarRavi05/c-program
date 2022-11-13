#include<stdio.h>
struct student
{
char *name;
int age;
float per;
};
int main()
{
struct student s[3];
s[0].name="Arun";
s[0].age=28;
s[0].per=78.8;
printf("\n Name       :%s",s[0].name);
printf("\n Age        :%d",s[0].age);
printf("\n Percentage :%0.2f",s[0].per);
printf("\n ------------------------");
s[1].name="Arun kumar";
s[1].age=29;
s[1].per=78.9;
printf("\n Name       :%s",s[1].name);
printf("\n Age        :%d",s[1].age);
printf("\n Percentage :%0.2f",s[1].per);
printf("\n ------------------------");
s[2].name="Tutor Jose";
s[2].age=30;
s[2].per=85.8;
printf("\n Name       :%s",s[2].name);
printf("\n Age        :%d",s[2].age);
printf("\n Percentage :%0.2f",s[2].per);
printf("\n ------------------------");

return 0;

}
