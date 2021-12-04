#include<stdio.h>
void simintra();
int main()
{
 simintra();
 return 0;
}
void simintra()
{
 float p,r,t,si;
 printf("Enter the principal amount\n");
 scanf("%f",&p);
 printf("Enter the rate\n");
 scanf("%f",&r);
 printf("Enter the time\n");
 scanf("%f",&t);
 si=p*r*t/100;
 printf("%f",si);
}	
