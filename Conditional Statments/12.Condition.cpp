#include<stdio.h>

int main() 
{
    int num1, num2, num3, max;
    
	printf("Enter the number 1 : ");
    scanf("%d", &num1);
    printf("Enter the number 2 : ");
    scanf("%d", &num2);
    printf("Enter the number 3 : ");
    scanf("%d", &num3);
    
    max=(num1 > num2)?((num1 > num3) ? num1 : num3):((num2 > num3)? num2 : num3);
    
    printf("\nMaximum number is: %d", max);
    
}

