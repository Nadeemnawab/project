#include<stdio.h>
void leep_year();
void main()
{
  leep_year();
}
void leep_year()
{
   int year;
   printf("enter a year\n");
   scanf("%d",&year);
   if(year%4 == 0)
    printf("%d is leap year\n",year);
   else
    printf("%d is not a leap year",year);
}
