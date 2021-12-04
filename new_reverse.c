#include<stdio.h>
void reverse_number();
void main() 
{
   reverse_number();
 
}
void reverse_number()
{
  int n, rev = 0, remainder;
  printf("Enter an number ");
  scanf("%d", &n);
  while (n != 0) 
  {
  remainder = n % 10;
  rev = rev * 10 + remainder;
  n /= 10;
  }
    printf("Reversed number = %d\n", rev);

}
