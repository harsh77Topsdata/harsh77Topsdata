#include <stdio.h>

int main() 
{
    char source[1000],destination[1000];
    int i;

    printf("Enter a string:");
    scanf("%s",source); 
    
    for(i=0;source[i]!='\0';i++) 
	{
        destination[i]=source[i];
    }
    
    destination[i]='\0'; 

    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);

    return 0;
}

