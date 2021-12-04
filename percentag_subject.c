#include<stdio.h>
void persubject();
void main()
{
  persubject();
}
void persubject()
{
  int m,e,h,s,so,per;
  printf("Enter Maths number\n");
  scanf("%d",&m);
  printf("Enter English number\n");
  scanf("%d",&e);
  printf("Enter Hindi number\n");
  scanf("%d",&h);
  printf("Enter Scince number\n");
  scanf("%d",&s);
  printf("Enter Social scince number\n");
  scanf("%d",&so);
  per=(m+e+h+s+so)/5;
  printf(" Total %% is =  %d\n",per);
}

  
