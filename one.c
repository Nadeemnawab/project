#include<stdio.h>
 	void one();
 	void two();
 	void three();
 	void four();
 	void five();
 	void six();
 	void saven();
 	void eight();
 	void nine();
 	void ten();
 	void eleven();
  void main()
   {
   	//one();
   	//two();
   	//three();
   	//four();
   	//five();
   	//six();
   	//saven();
   	//eight();
   	//nine();
   	 //ten();
   	 //eleven;
   }
   void one()
    {
    	int i,j,n;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1 || i==n || j==1 || j==n || i==j || (i+j==n+1))
			 printf("*");
			else
			 printf(" ");
		}
		printf("\n");
	}
}	
  void two()   
     {  
     	int i,j,n;
	printf("Enter number of rows : ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
	  for(j=1;j<=n;j++)
	  {
	    if((i==1) || (j==n) || i==j)
	        printf("*");
		 else 
		  printf(" ");
	  }
		printf("\n");
	}
    }
 void three()
 {
  	int i,j;
	for(i=1;i<=9;i++)
	{
	 for(j=1;j<=9;j++)
		{
		  if(i==9 || i==j || j==1)
		    printf("*");
		    else
		    printf(" ");
		}
		printf("\n");
	}
  		
 } 
  void four()
   {
   	int i,j;
	for(i=9;i>=1;i--)
	{
		for(j=1;j<=9;j++)
		{
			if(j<i)
			 printf(" ");
			else
			 printf("*");
		}
		printf("\n");
	}
   }
   void five()
   {
 	int i,j,n;
	
	printf("Enter number of rows : ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}	
   }
   void six()
    {
    	int i,n,j;
	printf("Enter number of rows : ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=1;j--)
		{
			if(j<=i)
			 printf("*");
			else
			 printf(" ");
		}
		printf("\n");
	}
    }
    void saven()
    {
    	int i,j,n;
	
	printf("Enter the number of row : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1 || j==1 || i==n || j==n)
			 printf("*");
			else
			 printf(" ");
		}
		printf("\n");
	}	
     }
     void eight()
     {
     	int n,i,j;
	printf("Enter odd number : ");
	scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
	 for(j=1;j<=9;j++)
	{
	  if((i==n/2+1) || (j==n/2+1))
		printf("*");
		 else
		printf(" ");
	}
		printf("\n");
	}
     }
     
   void eine()
   {
     int i,j,n;
	printf("Enter a number of rows : ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n;j++)
		{
			if(i==n || j==1 || i==j)
			 printf("*");
			else
			 printf(" ");
		}
		printf("\n");
	}
   }
   void ten()
   {
   	 int  n,m,i,j,k;
        printf("enter the no. of rows\n");
            scanf("%d",&n);
            m=n;
             for(i=n;i>=1;i--)
 {
            for(j=1;j<m;j++)
 {
        printf(" ");
 }
        for(k=1;k<=2*i-1;k++)
 {
        if(k==1||k==2*i-1||i==n)
        printf("*");
 else
            printf(" ");
 }
            m++; 
        printf("\n");
 }
   }
   void eleven()
   {
   	int i,j,row,space;
        printf("enter the number of row:");
        scanf("%d",&row);
        for(i=row;i>=1;i--)
   {
        for(space=1;space<i;space++)
            printf(" ");
            for(j=1;j<=row;j++)
            printf("*");
            printf("\n");
   }
 }
