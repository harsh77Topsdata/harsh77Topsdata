#include<stdio.h>

main()
{
	int n,i,sum;
	printf("Enter the number :");
	scanf("%d",&n);
	
	for(i=1;i<=5;i++)
	{
		sum+=i;
	}
	printf("\nsumition of number 1to %d",n,sum);
}
