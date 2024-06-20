#include<stdio.h>

main()
{
	int week;
	printf("Enter the number of week :");
	scanf("%d",&week);
	
	if(week==1)
	{
		printf("Monday");
	}
	else if(week==2)
	{
		printf("Tuseday1");
	}
	else if(week==3)
	{
		printf("Wensday");
	}
	else if(week==4)
	{
		printf("Thuseday");
	}
	else if(week==5)
	{
		printf("Friday");
	}
	else if(week==6)
	{
		printf("saturday");
	}
	else if(week==7)
	{
		printf("Sunday");
	}
	else
	{
		printf("Enter the Week number 1-7");
	}
}
