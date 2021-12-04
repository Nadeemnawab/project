#include<stdio.h>
void div();
int main()
{
  div();
  return 0;
}

void div()
{
  int A;
  printf("enter a number\n");
  scanf("%d",&A);
  if(A%5==0)
   printf("A is divisible for 5 ");
  else if (A%11==0)
   printf("A is divisible for 11");
  else 
   printf("NOt divisibele");
  	 
  	
}	
