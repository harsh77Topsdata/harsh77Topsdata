#include<stdio.h>

main()
{
	int Month;
	printf("Enter the Month :");
	scanf("%d",&Month);
	
	if(Month==1)
	{
		printf("31days");
	}
	else if(Month==2)
	{
		printf("28or29days");
	}
	else if(Month==3)
	{
		printf("31days");
	}
	else if(Month==4)
	{
		printf("30days");
	}
	else if(Month==5)
	{
		printf("31days");
	}
	else if(Month==6)
	{
		printf("30days");
	}
	else if(Month==7)
	{
		printf("31days");
	}
	else if(Month==8)
	{
		printf("31days");
	}
	else if(Month==9)
	{
		printf("30days");
	}
	else if(Month==10)
	{
		printf("31days");
	}
	else if(Month==11)
	{
		printf("30days");
	}
	else if(Month==12)
	{
		printf("31days");
	}
	else 
	{
		printf("Enter the Month number 1-12");
	}
}
