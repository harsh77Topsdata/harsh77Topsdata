#include<stdio.h>

main()
{
	int heightcm;
	printf("enter the heightcm :");
	scanf("%d",&heightcm);
	
	if(heightcm<150);
	{
		printf("Short");
	}
	else if(heightcm>=150 && heightcm<170)
	{
		printf("Avarage");
	}
	else if(heightcm>=170 && heightcm<190)
	{
		printf("tall");
	}
	else 
	{
		printf("very tall!");
	}
}
