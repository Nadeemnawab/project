#include <stdio.h>
void number();
int main()
{
  number();
  return 0;
}

void number()  
{
 int A;
 printf("Enter the number A: ");
 scanf("%d", &A);
 if (A > 0)
  printf("%d is positive.", A); 
   else if (A < 0)
    printf("%d is negative.", A);
     else if (A == 0)
      printf("%d is zero.", A);
}
