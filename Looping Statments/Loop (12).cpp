#include<stdio.h>

main()
{
	int n,i=1,ev=0,odd=0,evsum=0,oddsum=0;
	
	while(i<=5)
	{
		printf("enter the number :");
	    scanf("%d",&n);
	
	if(n%=0)
	{
		printf("the number is even ");
		ev++;
		evsum+=n;
	}
	else
	{
		printf("the number is odd");
		odd++;
		oddsum+=n;
	}
	i++;
	}
	
	printf("\nThe number is even %d",ev);
	printf("\nThe number is odd %d",odd);
	printf("\nThe number is even sum %d",evsum);
	printf("\nThe number is odd sum %d",oddsum);
	
}
