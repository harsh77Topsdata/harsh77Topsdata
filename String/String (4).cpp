#include<stdio.h>
#include<string.h>

main()
{
	char a[4],b[4];
	
	printf("Enter the string :");
	gets(a);
	printf("Enter the string :");
	gets(b);
	
	int c=strcmp(a,b);
	
	printf("\ncomparision %d",c);
}
