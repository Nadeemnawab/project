#include<stdio.h>
void uper_lower();
void main()
{
 uper_lower();
}
void uper_lower()
{
 char ch;
 printf("Enter character\n");
 scanf("%c",&ch);
 if(ch>= 'A' && ch<='Z')
 {
  printf("It is a Uppercase Character\n");	 	
 }
 else if (ch>= 'a' && ch<='z')
 {
   printf("It is a lowercase Character\n");	 	
 }
 	
}
