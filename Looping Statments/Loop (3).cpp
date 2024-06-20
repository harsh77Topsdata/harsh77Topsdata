#include<stdio.h>

main()
{
	int n,i;
	printf("Enter an integer :");
	scanf("%d",&n);
	
	for(i=1;i<11;i++)
	{
		printf("\n%d",n*i);
	}
}
