#include<stdio.h>
void months_days();
void main()
{
 months_days();
}
void months_days()
{
  int s;
  printf("Enter a number\n");
  scanf("%d",&s);
  if (s==1)
  { 
   printf("31 Days in January \n");
  }
  else if(s==2)
  {
   printf("28 Days in February\n");
  }
  else if(s==3)
  {
   printf("31 Days in March\n");
  }
  else if(s==4)
  {
    printf("30 Days in April\n");
  }
  else if(s==5)
  {
   printf("31 Days in May\n");
  }
  else if(s==6)
  {
   printf("30 Days in June\n");
  }
  else if(s==7)
  {
   printf("31 Days in July\n");
  }
  else if(s==8)
  {
   printf("31 Days in August\n");
  }
  else if(s==9)
  {
   printf("30 Days in September\n");
  }
  else if(s==10)
  {
   printf("31 Days in October\n");
  }
  else if(s==11)
  {
   printf("30 Days in November\n");
  }
  else if(s==12)
  {
   printf("31 Days in December\n");
  }	
} 	
