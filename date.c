#include<stdio.h>
   void date();
    void main()
    {
    	date();
    		
    }
    void date()
    {
    	int d,m,y;
    	printf("Enter the date\n");
    	scanf("%d",&d);
    	printf("Enter the month in number\n");
    	scanf("%d",&m);
	printf("Enter the year in number\n");
    	scanf("%d",&y);
    	
    	if(d<=31&& m<=12 && y<=2021)
    	 {
    	 printf("Date is ==> %d/%d/%d\n",d,m,y);
    	 }
    	 else 
    	 {
    	 	printf("Date is not valid");
    	 }
    		
      }
