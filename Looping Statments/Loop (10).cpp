#include<stdio.h>

main()
{
	int a=1,sum=0;
	
	while(a<=10)
	{
		printf("\n%d",a);
		sum+=a;
		a++;
	}
	printf("\nsum : %d",sum);
}
