#include<stdio.h>
void sum_natural_number();
void main()
{
 sum_natural_number();
}
void sum_natural_number()
{ 
  int n,i,sum=0;
  printf("Enter a number");
  scanf("%d",&n);
  for (i=1;i<=n;i++)
  { 
   sum=sum+i;
  }
   printf("%d",sum);
}
