#include <stdio.h>
void search();
void main()
{
 search();
}
void search()
{
    int arr[100];
    int size, i, search, searched;
    printf("Please enter size of array: ");
    scanf("%d", &size);
    printf("Please enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nPlease enter element to search: ");
    scanf("%d", &search);
    searched = 0; 
    for(i=0; i<size; i++)
    {
        if(arr[i] == search)
        {
            searched = 1;
            break;
        }
    }
    if(searched == 1)
    {
        printf("%d is found at position %d\n", search, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", search);
    }
} 
