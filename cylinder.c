#include<stdio.h>
void cylinder();
void main()
{
 cylinder();
}
void cylinder()
{
  int a,r,p=3.14,d=r/2;
  printf("Enter a diameter");
  scanf("%d",&d);
  
  
  
}
int main()
{
	
	float vol,r,h;
	printf("enter radius: ");
	scanf("%f",&r);
	printf("enter height: ");
	scanf("%f",&h);
   
	vol=(22*r*r*h)/7;
	printf("VOC: %f\n",vol);
	return 0;
}
