#include<stdio.h>

main()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	
	if(n>36)
	{
		printf("The number is positive");
	}
	else if(n<25)
	{
		printf("The number is negative");
	}
	else 
	{
		printf("The number is zero");
	}
	
}
