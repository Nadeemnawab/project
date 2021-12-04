#include<stdio.h>
void even_odd();
int main()
{
  even_odd();
  return 0;
}
void even_odd()
{
   int s;
   printf("Enter a number\n");
   scanf("%d",&s);
   if(s%2==0)
   {
    printf("Number is even\n");
   }
   else
   {
     printf("number is odd");
   }
 	 	
}
 	
