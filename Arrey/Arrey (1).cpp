#include <stdio.h>

void findMax() 
{
    int i, a[5];
    int max;

    for (i=0;i<5;i++) 
	{
        printf("Enter element %d:",i+1);
        scanf("%d",&a[i]);
    }

    max=a[0];

    for(i=1;i<5;i++) 
	{
        if(a[i]>max) 
		{
            max=a[i];
        }
    }
    
    printf("The maximum element is %d\n", max);
}


int main() 
{
    findMax();
    return 0;
}

