#include<stdio.h>
void printArray(int arr[], int len);
int main()
{
    int arr[100], even[100], odd[100], evenCount, oddCount, i, size;    
    printf("Please enter size of the array: ");
    scanf("%d", &size);
    printf("Please enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    evenCount = 0;
    oddCount = 0;
    for(i=0; i<size; i++)
    {        
        if(arr[i] & 1)
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }
        else
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
    }
    printf("\nElements of even array: \n");
    printArray(even, evenCount);
    printf("\nElements of odd array: \n");
    printArray(odd, oddCount);
    return 0;
}

void printArray(int arr[], int len)
{
    int i;
    printf("Elements in the array: ");
    for(i=0; i<len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
