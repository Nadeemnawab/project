#include <stdio.h>
max_two();
void main()
{
 max_two();
}
max_two()
{
 int num1, num2;
 printf("Enter two numbers to find maximum: ");
 scanf("%d%d", &num1, &num2);
 switch(num1 > num2)
 { 
  case 0: 
   printf("%d is maximum\n", num2);
   break;
  case 1: 
   printf("%d is maximum\n", num1);
   break;
  }

    
}
