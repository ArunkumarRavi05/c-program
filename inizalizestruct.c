#include<stdio.h>
struct student
{
char *name;
int age;
float percentage;
};

int main()
{
struct student s={"Arun",28,78.8};

printf("\n Name       :%s",s.name);
printf("\n Age        :%d",s.age);
printf("\n Percentage :%0.2f",s.percentage);

return 0;

}
