#include<stdio.h>
void alpha_dig_sp();
void main()
{
 alpha_dig_sp();
}
void alpha_dig_sp()
{
 int s;
 char ch;
 printf("Enter someting\n");
 scanf("%c",&ch);
 if(ch>= 'A' && ch<='Z'|| ch>= 'a' && ch<='z')
 {
  printf("It is a Alphabet\n");	 	
 }
  else if (ch>='0' && ch<='9')
  {
   printf("It is a Digit\n");	 	
  }
 else 
 {
  printf("It is a special character");
 }
 	
}
