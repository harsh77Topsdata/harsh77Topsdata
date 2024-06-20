#include<stdio.h>

main()
{
	int number,maxdigit,digit;
	printf("Enter the number :");
	scanf("%d",&number);
	
	while(number!=0)
	digit=number%10;
	
	if(digit>maxdigit)
	{
		maxdigit = digit;
	}
	number=number/10;
	
	printf("The maxidigit is %d :",maxdigit);
	

	
}
