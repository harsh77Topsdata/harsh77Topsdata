#include <stdio.h>

int main() 
{
    int count=0;
    int num,originalnum,reversednum,remainder;

    printf("Enter 3 numbers:\n");

    while(count<3) 
	{
        scanf("%d",&num);
        originalnum = num;
        reversednum = 0;

        while(num!=0) 
		{
            remainder=num%10;
            reversednum=reversednum*10+remainder;
            num/=10;
        }
        if(originalnum==reversednum) 
		{
            printf("%d is a palindrome\n",originalnum);
        } 
		else 
		{
            printf("%d is not a palindrome\n",originalnum);
        }
        count++;
    }
}

