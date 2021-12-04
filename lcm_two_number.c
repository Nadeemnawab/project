#include<stdio.h>
void lcm_two_number();
void main()
{
 lcm_two_number();
}
void lcm_two_number()
{
  int num1, num2, max;
  printf("Enter Two Positive Integers :\n");
  scanf("%d %d", &num1, &num2);
  max=(num1>num2) ? num1 : num2;
  while(1)                    
   { 
     if(max%num1==0 && max%num2==0)
     {
           printf("LCM of %d And %d is %d\n", num1, num2,max);
           break;      
     }
       ++max;
   }
  
}

 

