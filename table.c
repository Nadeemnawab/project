#include<stdio.h>
void table();
void main()
{
 table();
}
void table()
{
  int i, num;
  printf("Enter number to print table: ");
  scanf("%d", &num);
   for(i=1; i<=10; i++)
   {
     printf("%d * %d = %d\n", num, i, (num*i));
   }
}   


