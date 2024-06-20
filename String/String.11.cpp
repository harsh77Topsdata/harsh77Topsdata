#include <stdio.h>
#include <string.h>

void swapCase(char*str);

int main() 
{
    char sentence[1000];
    int isupper,islower,toupper,tolower;
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence),stdin);
    
    swapCase(sentence);
    
    printf("Modified sentence: %s",sentence);
    
    return 0;
}

void swapCase(char*str) 
{
	int isupper,islower,toupper,tolower;
    for(int i=0;str[i]!='\0';i++) 
	{
        if((str[i])) 
		{
            str[i]=toupper;
        } 
		else if((str[i])) 
		{
            str[i]=tolower;
        }
    }
}

