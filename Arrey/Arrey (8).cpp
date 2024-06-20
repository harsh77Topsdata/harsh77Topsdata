#include <stdio.h>
#include <string.h>

int main() 
{
    char str[60];
    char reversedStr[60];
    int len,i;
    int isPalindrome=1;

    printf("Enter a string: ");
    scanf("%s",str);

    len=strlen(str);

    for(i=0;i<len;i++) 
	{
        reversedStr[i]=str[len-i-1];
    }
    reversedStr[len]='\0'; 
    printf("Reversed string: %s\n", reversedStr);


    for (i = 0; i < len; i++) {
        if (str[i] != reversedStr[i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) 
	{
        printf("The string is a palindrome.\n");
    } 
	else 
	{
        printf("The string is not a palindrome.\n");
    }

    return 0;
}


