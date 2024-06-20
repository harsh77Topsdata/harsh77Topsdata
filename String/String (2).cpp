#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int length,i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    length = strlen(str);

    if (str[length-1]=='\n') 
	{
	    str[length-1]='\0';
        length--;
    }
    printf("Individual characters in reverse order:\n");
    
	for(i=length-1;i>=0;i--) 
	{
        printf("%c\n",str[i]);
    }

}
