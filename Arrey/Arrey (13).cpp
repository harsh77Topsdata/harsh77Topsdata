#include<stdio.h>

main()
{
	int number[5];
	int i;
	
	for(i=0;i<=5;i++)
	{
		printf("Enter the number  %d :",i+1);
		scanf("%d",&number[i]);
	}
	printf("\nThe number of reverse order");
	
	
	for(i=5;i>0;i--)
	{
		printf("\n%d",number[i]);
		
	}
}
