#include<stdio.h>
void temperature_fah_Celsius();
void main()
{
 temperature_fah_Celsius();
}
void temperature_fah_Celsius()
{
  float cel, fah;
  printf("Enter Temperature in Celsius : \n");
  scanf("%f", &cel);
  fah = (1.8 * cel) + 32;
  printf("Temperature in Fahrenheit : %f \n", fah);

}





  
