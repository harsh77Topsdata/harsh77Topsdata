#include<stdio.h>
#include<string.h>

main()
{
	char str[100];
    int i,word_count=0,in_word=0;
	
	printf("Enter the string :");
	gets(str);
	
	for(i=0;str[i]!='\0';i++) 
	{
        if(str[i]) 
		{
            in_word = 0;
        } 
		else if(!in_word)
		{
            {
                word_count++;
                in_word = 1;
            }
        }
    }
}
