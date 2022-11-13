#include<stdio.h>
// book->name,author,price
// cell->model,price,color
struct store
{
double price;
char *name;
char *author;
char *model;
char *color;
}o;
struct store2
{
double price;
union{
   struct{
   char *name;
   char *author;
    }book;
   struct{
   char *model;
   char *color;
   }cell;
}product;
}o2;
int main()
{
o.model="Nokia";
o.color="Red";
o.price=3550;
printf("\n Size of store   :%d",sizeof(struct store));
printf("\n Size of store2  :%d",sizeof(struct store2));
o2.product.cell.model="Nokia";
o2.product.cell.color="Red";
o2.price=3500.00;
printf("\n cell Model :%s",o2.product.cell.model);
printf("\n cell Color :%s",o2.product.cell.color);
printf("\n cell Price :%0.2f",o2.price);
return 0;
}
