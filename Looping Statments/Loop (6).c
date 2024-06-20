#include <stdio.h>


int getFirstDigit(int n) 
{
	
    while (n >= 10) 
	{
        n /= 10;
    }
   
}


int getLastDigit(int n) 
{
    n%10;
}

int main() 
{
    int number,firstDigit,lastDigit,sum;
    
	printf("Enter a number: ");
    scanf("%d", &number);

    firstDigit = getFirstDigit(number);
    lastDigit = getLastDigit(number);

    sum = firstDigit + lastDigit;
    
	printf("The summation of the first and last digits of %d is: %d\n", number, sum);

    
}

