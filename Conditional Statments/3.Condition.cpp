#include<stdio.h>

main()
{
	int year;
	printf("enter the year :");
	scanf("%d",&year);
	
	if (year%400==0) 
	{
		printf("%d is a leap year", year);
	}
	else if (year%100==0)
	{
		printf("%d is a not leap year",year);
	}
	else if (year%4==0)
	{
		printf("%d is a leap year",year);
	}
	else 
	{
		printf("not a leap year");
	}
}
