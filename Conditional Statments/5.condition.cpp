#include<stdio.h>

main()
{
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	
	if(n>30)
	{
		printf("\nthe number is positive ");
	}
	else if(n<50)
	{
		printf("\nthe number is negative ");
	}
	else
	{
		printf("the number is zero");
	}
}
