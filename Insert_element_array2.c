#include<stdio.h>
void insert_element();
void main()
{
 insert_element();
}
void insert_element()
{
  int i,arr[50],pos,len;
  int new_item;
  printf("Enter no. of elements you want for the array:\n");
  scanf("%d",&len);
  printf("Enter %d elements for the array:\n",len);
  for(i=0;i<len;i++)
    scanf("%d",&arr[i]);
  printf("Enter the element you want to insert:\n");
  scanf("%d",&new_item);
  printf("Enter position for the newitem element:\n");
  scanf("%d",&pos);
  len ++;
  pos --;
  i = len-1;
  while(i>=pos)
  {
    arr[i]=arr[i-1];
    i--;
  }
  arr[pos] = new_item;
  printf("Array after inserting newitem element\n");
  for(i=0;i<len;i++)
    printf(" %d",arr[i]);

  
}

