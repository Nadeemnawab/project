#include<stdio.h>
void voting();
void main()
{
 voting();
    		
}
void voting()
{
 int age;
 printf("Enter the age\n");
 scanf("%d",&age);
 if(age>=18)
 {
   printf("You are Aligibil for Voting\n");
 }	
 else
 {
  printf("you are not Aligibil for Voting\n");
 }		
}
