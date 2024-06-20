#include<stdio.h>
#include<string.h>

main()
{
	char str[100];
	int i;
	int alphabets,digit,specialchar;
	
	printf("Enter the string :");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i])
		{
			alphabets++;
		}
		else if(str[i])
		{
			digit++;
		}
		else if(str[i])
		{
			specialchar++;
		}
	}
	printf("\ntotal number of alphabets %d",alphabets);
	printf("\ntotal number of digit %d",digit);
	printf("\ntotal number of specialchar %d",specialchar);
}
