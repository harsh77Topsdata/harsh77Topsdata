#include<stdio.h>

main()
{
	int i,fact,number;
	
	printf("Enter the number 1 :");
	scanf("%d",&number);
	printf("Enter the number 2 :");
	scanf("%d",&number);
	printf("Enter the number 3 :");
	scanf("%d",&number);
	printf("Enter the number 4 :");
	scanf("%d",&number);
	printf("Enter the number 5 :");
	scanf("%d",&number);
	
	for(i=0;i<=5;i++)
	{
		fact*=i;
	}
	
	printf("\nfactorials is %d ",fact);
}
