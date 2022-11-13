#include<stdio.h>
struct student
{
char *name;
int age;
float percentage;
};

int main()
{
struct student s,s1;
printf("\n Size of stucture : %d",sizeof(s));
s.name="Arun";
s.age=28;
s.percentage=78.8;
printf("\n Name       :%s",s.name);
printf("\n Age        :%d",s.age);
printf("\n Percentage :%0.2f",s.percentage);

s1.name="Tutor joes";
s1.age=30;
s1.percentage=85.8;
printf("\n Name       :%s",s1.name);
printf("\n Age        :%d",s1.age);
printf("\n Percentage :%0.2f",s1.percentage);
return 0;

}
