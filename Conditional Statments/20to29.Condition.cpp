#include<stdio.h>

main()
{
	int units,upto;
	printf("Enter the Units :");
	scanf("%d",&units);
	
	if(upto<350)
	{
		350*1.20;
	}
	else if(350>600)
	{
		350>600*1.50;
	}
	else if(600>800)
	{
		600>800*1.80;
	}
	else 
	{
		800*2;
	}
}
