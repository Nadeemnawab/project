#include<stdio.h>
void area();
int main()
{
 area();
 return 0;
}
void area()
{
  float a,r;
  float p=3.14;
  printf("enter r value");
  scanf("%f",&r);
  a=p*r*r;
  printf("Area of Cricle= %f",a);
}
