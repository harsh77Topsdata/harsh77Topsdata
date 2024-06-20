#include<stdio.h>

main()
{
	char a[50];
	int i,k,j,rows,collum;
	
	printf("enter the rows :");
	scanf("%d",&rows);
	printf("enter the collum :");
	scanf("%d",&collum);
	
	k=1;
	for(i=1;i<rows;i++)
	{
		for(j=1;j<collum;j++)
		{
			printf("%4d",k);
			k++;
		
		}
		printf("\n");
	}
	
}
