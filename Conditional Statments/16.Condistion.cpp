#include<stdio.h>

main()
{
	float  temperature;
	printf("Enter the temperature :");
	scanf("%f",&temperature);
	
	if(temperature<0)
	{
		printf("Freezing weather");
	}
	else if(temperature>0 && temperature<=10)
	{
		printf("Very cold wether");
	}
	else if(temperature>10 && temperature<=20)
	{
		printf("Cold wether");
	}
	else if(temperature>20 && temperature<=30)
	{
		printf("Normal in Temprature");
	}
	else if(temperature>30 && temperature<=40)
	{
		printf("Its Hot");
	}
	else 
	{
		printf("It is very hot");
	}
}
