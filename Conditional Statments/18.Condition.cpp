#include<stdio.h>

main()
{
	float costprice,sellingprice,profit,loss;
	//input cost and selling price
	
	printf("Enter the costprice :");
	scanf("%f",&costprice);
	printf("\nEnter the sellingprice :");
	scanf("%f",&sellingprice);
	
	if(costprice < sellingprice)
	{
		printf("profit");
	}
	else if(costprice > sellingprice)
	{
		printf("loss");
	}
	else
	{
		printf("no profit and no loss");
	}
}
