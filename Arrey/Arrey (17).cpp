#include <stdio.h>

main()
{
	int arr[5],n;
	int i,j,temp;
	printf("\nEnter the Eliments :");
	for(i=0;i<5;i++)
	{
	    scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		
		
		printf("\nSorted arrey ascendig order %d");
		
		for(i=0;i<5;i++)
		{
			printf("%d",arr[i]);
		}
	}
}



