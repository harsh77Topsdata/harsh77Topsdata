#include<stdio.h>

main()
{
	int Month;
	printf("Enter the Month :");
	scanf("%d",&Month);
	
	if(Month==1)
	{
		printf("JAN");
	}
	else if(Month==2)
	{
		printf("FEB");
	}
	else if(Month==3)
	{
		printf("MAR");
	}
	else if(Month==4)
	{
		printf("APRIL");
	}
	else if(Month==5)
	{
		printf("MAY");
	}
	else if(Month==6)
	{
		printf("JUN");
	}
	else if(Month==7)
	{
		printf("JULY");
	}
	else if(Month==8)
	{
		printf("AUG");
	}
	else if(Month==9)
	{
		printf("SEPT");
	}
	else if(Month==10)
	{
		printf("oct");
	}
	else if(Month==11)
	{
		printf("NOW");
	}
	else if(Month==12)
	{
		printf("DEC");
	}
	else 
	{
		printf("Enter the Month number 1-12");
	}
}
