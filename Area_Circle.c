#include<stdio.h>
void area();
void main()
{
  area();
}
void area()
{
  float p=3.14,a,r;
  printf("Enter a radius\n");
  scanf("%f",&r);
  a=p*r*r;
  printf("%f",a);
}
