#include<stdio.h>

main()
{
	char ch;
	printf("enter the character :");
	scanf("%c",&ch);
	
	if(ch>='A'&& ch<='Z')
	{
		printf("upper case");
	}
	else if(ch>='a'&& ch<='z')
	{
		printf("lowar case");
	}
	else if(ch>=0 && ch<=9)
	{
		printf("digit");
	}
	else
	{
		printf("Special");
	}
}
