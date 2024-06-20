#include <stdio.h>

int main() 
{
    int num,reversedNum=0;
    printf("Enter a number:");
    scanf("%d",&num);

    for (int originalNum=num;originalNum!=0;originalNum/=10) 
	{
        int digit=originalNum%10;
        reversedNum = reversedNum*10 + digit;
    }

    printf("Reversed Number: %d\n", reversedNum);
    return 0;
}

