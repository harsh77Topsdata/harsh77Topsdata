#include<stdio.h>

main()
{
	int i,n,sum,second_sum;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	    second_sum+=sum;
	}
	printf("sum is %d",second_sum);
}
