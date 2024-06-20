#include<stdio.h>

main()
{
	int i,j,n,number;
	printf("enter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nenter the numbers :");
	    scanf("%d",&number);
	}
	for(i=1;i<=number;i++)
	{
	    printf("\ntable of %d",i);
	}
    for(j=1;j<=10;j++)
    {
	    printf("%d*%d=%d\n",i,j,i*j);
    }

printf("----------------------------------\n");
	
}
	

