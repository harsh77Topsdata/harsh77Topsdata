#include<stdio.h>
#include<string.h>

main()
{
	char a[100];
	int i,str[i];
	
	printf("Enter the string :");
	gets(a);
	
	printf("individuls charecters in the string \n");
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!='\n')
		{
			printf("\n%c",str[i]);
		}
	}
	
}
