#include<stdio.h>
void number();
void main()
{
  number();
    		
}
void number()
{
  int a,b,c;
  printf("Enter first number\n");
  scanf("%d",&a);
  printf("Enter second number\n");
  scanf("%d",&b);
  printf("Enter third number\n"); 
  scanf("%d",&c);
  if (a>b)
  {
   if (a>c)
   {
    printf("\ngreatest number = %d \n",a);
   }
    else
    {
     printf("\ngreatest number = %d \n",c);
    }
  }	
    else if(b>c)
    {
     printf("\ngreatest number  = %d\n",b);
    }
    else
    {
     printf("\ngreatest number  = %d\n",c);
    }
    		
}
