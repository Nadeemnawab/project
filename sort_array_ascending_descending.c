#include<stdio.h>
void sort_array();
void main()
{
 sort_array();
  
}
void sort_array() 
{
 int arr[100], i, j, temp, size;
    printf("Please enter size of array: ");
    scanf("%d", &size);
    printf("Please enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nElements of array in ascending order: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }
    
}
