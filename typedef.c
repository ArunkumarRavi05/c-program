#include<stdio.h>
typedef struct student
{
char *name;
int age;
float percentage;
}student;

int main()
{
typedef int arun;//here arun act has a integer data type int.
arun a;
a=100;
printf("\n%d",a);
student s;
printf("\n Size of stucture : %d",sizeof(s));
s.name="Arun";
s.age=28;
s.percentage=78.8;
printf("\n Name       :%s",s.name);
printf("\n Age        :%d",s.age);
printf("\n Percentage :%0.2f",s.percentage);

return 0;

}
