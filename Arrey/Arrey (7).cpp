#include <stdio.h> 

int string_length(char* str) 
{ 
	int len; 
	
	printf("Enter the length :");
	scanf("%c",&len);

	
	while (*str!='\0') 
	{ 
		len++; 
		str++; 
	} 

} 

int main() 
{ 
	
	char str[] = "Hello, world!"; 
	int length; 

	length = string_length(str); 

	printf("The length of the string is: %d", length); 

}

