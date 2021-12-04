#include<stdio.h>
void triangle();
int main()
{
  triangle();
  return 0;
}
void triangle()
{
   int s,n,p;
   printf("Enter a first angal of triangle\n");
   scanf("%d",&s);
   printf("Enter a second angal of triangle\n");
   scanf("%d",&n);
   printf("Enter a third angal of triangle\n");
   scanf("%d",&p);
   if(s+n+p==180)
   {
    printf("it's a valid triangale\n");
   }  
   else 
   {
    printf("it's not a valid triangale\n");
   }

   
   
 	 	
}
 	
