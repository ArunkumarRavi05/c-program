#include<stdio.h>
void display()
{
static int x=1;
//printf("\n %d ",x);
x++;
printf("\n %d ",x);

}
int main()
{
display();
display();
display();
return 0;
}
