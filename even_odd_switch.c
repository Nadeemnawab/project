#include<stdio.h>
void even_odd_switch();
void main()
{
 even_odd_switch();

}
void even_odd_switch()
{
 int num;
 printf("Enter any number to check even or odd: ");
 scanf("%d", &num);
 switch(num % 2)
 {
  case 0: 
   printf("Number is Even\n");
   break;
  case 1: 
   printf("Number is Odd\n");
   break;
  }
}  
