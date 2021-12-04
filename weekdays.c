#include<stdio.h>
void weekday();
void main()
{
 weekday();
}
void weekday()
{
  int s;
  printf("Enter a number\n");
  scanf("%d",&s);
  if (s==1)
  {
   printf("Sunday\n");
  }
  else if(s==2)
  {
   printf("Monday\n");
  }
  else if(s==3)
  {
   printf("Tuesday\n");
  }
  else if(s==4)
  {
    printf("Wednesday\n");
  }
  else if(s==5)
  {
   printf("Thursday\n");
  }
  else if(s==6)
  {
   printf("Friday\n");
  }
  else if(s==7)
  {
   printf("Saturday\n");
  }
 
  
 	
}	
