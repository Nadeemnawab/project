#include<stdio.h>
void profit_loss();
int main()
{
  profit_loss();
  return 0;
}
void profit_loss()
{
  int p,s;
  printf("Enter the cost price");
  scanf("%d",&p);
  printf("Enter the sell price");
  scanf("%d",&s);
  if(p<s)
  {
   printf("profit\n");
  }
  else
  {
   printf("loss\n");
  }
}
