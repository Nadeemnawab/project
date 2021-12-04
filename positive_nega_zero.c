#include<stdio.h>
void pos_neg_zero();
void main()
{
 pos_neg_zero();
}
void pos_neg_zero()
{
 int number;
 printf("Enter a number");
 scanf("%d",&number);
 switch (number>0)
  {
   case 1:
    printf("%d id positive",number);
    break;
   case 0:
   switch(number<0)
   {
    case 1:
     printf("%d id nagative",number);
     break;
    case 0:
     printf("%d id nagative",number);
     break;    
   }
   break;
  }
     
 
}
