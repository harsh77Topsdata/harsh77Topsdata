#include<stdio.h>

main()
{
	int N,month;
	printf("Enter the month :"); //month input by days
	scanf("%d",&month);
	
	if(N==1||N==3||N==5||N==7||N==8||N==10||N==12)//check for 31 days
	{
		printf("31 Days");
	}
	else if (N==4||N==6||N==9||N==11) // Check for 30 Days
	{
		printf("30 Days");
	}
	else if (N==2)  // Check for 28/29 Days 
	{
		printf("28/29 Days"); 
	}
    else
	{
	    printf("Invalid Month"); 
	} 

}
