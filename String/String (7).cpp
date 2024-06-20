#include<stdio.h>
#include<string.h>

main()
{
	char str[100];
	int vowels=0,consonants=0;
	int i,ch;
	
	printf("Enter the string :");
	gets(str);
	
	for(i=0;str[i]='\0';i++)
	{
	    char ch=(str[i]);
    }
	if(ch)
	{
		vowels++;
	}
	else if(ch>='a' & ch<='z')
	{
		consonants++;
	}
	
	printf("\nnumber of vowels %d",vowels);
	printf("\nnumber of consonants %d",consonants);
}
