#include<stdio.h>

main()
{
	int number[5];
	int i;
	
	for(i=0;i<=5;i++)
	{
		printf("Enter the number %d:",i+1);
		scanf("%d",&number[i]);
	}
	for(i=0;i<5;i++)
	{
		if(number[i]%2==0)
		{
			printf("\nThe numer is even %d",i+1,number[i]);
		}
		else 
		{
			printf("\nThe number is odd %d",i+1,number[i]);
		}
		
		
	}
}
