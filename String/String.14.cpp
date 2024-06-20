#include<stdio.h>
#include<string.h>

main()
{
	char a[4],b[4],c[4];
	int i,j;
	
	printf("Enter the string :");
	gets(a);
	printf("Enter the string :");
	gets(b);
	
	for(i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
	}
	for(j=0;b[i]!='\0';j++)
	{
		c[i]=a[i]+b[i];
		i++;
	}
	
	
	printf("The string is combine %s",c[i]=a[i]+b[i]);
}
