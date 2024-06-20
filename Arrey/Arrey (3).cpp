#include<stdio.h>

main()
{
	char str[100],temp;
	int i,j=0,strlen;
	
	printf("Enter The String :");
	gets(str);
	
	i=0;
	j=strlen-1;
	
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}

	printf("\nReverse a String Is: %s", str);

}
