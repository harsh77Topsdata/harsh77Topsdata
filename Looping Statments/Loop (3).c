#include<stdio.h>

main()
{
	int num,reversednum,reminder;
	printf("Enter the Intiger:");
	scanf("%d",&num);
	
	while(num!=0)
	{
		reminder=num%10;
		reversednum=reversednum*10 + reminder;
		num/=10;
	}
	printf("\nreverse number %d",reversednum);
}
