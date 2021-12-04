#include<stdio.h>
void size_date();
void main()
{
 size_date();
}
void size_date()
{
 printf(" int is %d byte\n",sizeof(short int));
 printf(" int is %d byte\n",sizeof(long int));
 printf(" int is %d byte\n",sizeof(float));
 printf(" int is %d byte\n",sizeof(double));
 printf(" int is %d byte\n",sizeof(char));
 printf(" int is %d byte\n",sizeof(unsigned));
 printf(" int is %d byte\n",sizeof(signed int));
}
