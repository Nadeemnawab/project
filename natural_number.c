#include<stdio.h>
void natural_number();
void main()
{
 natural_number();
}
void natural_number()
{
  int n,i;
  printf("Enter a number ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   printf("%d\n",i);
  }
	
}
