#include<stdio.h>

main()
{
    int i,j,A;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",j+64);
		}
		printf("\n");
	}
	
}
