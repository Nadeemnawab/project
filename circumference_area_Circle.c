#include<stdio.h>
void circum_area();
void main()
{
   circum_area();
}
void circum_area()
{
   int rad;
   float PI = 3.14, area, ci;
   printf("\nEnter radius of circle: ");
   scanf("%d", &rad);
   area = PI * rad * rad;
   printf("\nArea of circle : %f ", area);
   ci = 2 * PI * rad;
   printf("\nCircumference : %f ", ci);
}
