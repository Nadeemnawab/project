#include <stdio.h>
void count_frequency();
void main()
{
 count_frequency();
}
void count_frequency()
{
 int arr[100], freq[100];
 int size, i, j, count;
 printf("Please enter size of the array: ");
 scanf("%d", &size);
 printf("Please enter elements in array: ");
 for(i=0; i<size; i++)
 {
  scanf("%d", &arr[i]);
  freq[i] = -1;
 }
 for(i=0; i<size; i++)
 {
  count = 1;
   for(j=i+1; j<size; j++)
   {
    if(arr[i]==arr[j])
    {
     count++;
     freq[j] = 0;
    }
   }
  if(freq[i] != 0)
  {
   freq[i] = count;
  }
 }
  printf("\nFrequency of all elements of array : \n");
  for(i=0; i<size; i++)
  {
   if(freq[i] != 0)
   {
    printf("%d occurs %d times\n", arr[i], freq[i]);
   }
  }
   
}
