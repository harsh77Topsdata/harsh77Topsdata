#include<stdio.h>

main()
{
	int arr[5];
	int i,sum=0;
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter the Eliments :");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		sum+=arr[i];
	}
	printf("\nSum of arry eliments %d",sum);
}
