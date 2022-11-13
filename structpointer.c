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
struct student *ptr=&s;

printf("\n Name       :%s",(*ptr).name);
printf("\n Age        :%d",ptr->age);
printf("\n Percentage :%0.2f",ptr->percentage);

return 0;

}
