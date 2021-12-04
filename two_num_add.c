#include<stdio.h>
void sum();
int main()
{
 sum();
 return 0;
}
void sum()
{
 int a,b,sum;
 printf("enter a first n number\n");
 scanf("%d",&a);
 printf("enter a  second number\n");
 scanf("%d",&b);
 sum=a+b;
 printf("sum=%d",sum);
}
