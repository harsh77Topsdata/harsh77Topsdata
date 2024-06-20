#include<stdio.h>

main()
{
	int a,b,choose;
	printf("enter the a :");
	scanf("%d",&a);
	printf("\nenter the b :");
	scanf("%d",&b);
	
	if(a+b)
	{
		printf("your choose addition : %d",a+b);
	}
	else if(a-b)
	{
		printf("\nyour choose multiplication : %d",a-b);
	}
	else if(a*b)
	{
		printf("\nyour choose substriction : %d",a*b);
	}
	else if(a/b)
	{
		printf("\nyour choose division : %d",a/b);
	}
	else 
	{
		printf("not valid number");
	}
}
