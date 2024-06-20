#include<stdio.h>
main() 
{
    int i,j,n=4; 

    for(i=1;i<2*n;i++) 
	{
        int stars=i<=n?i:2*n-i;
        
		for(int j=0;j<stars;j++) 
		{
            printf("* ");
        }
        printf("\n");
    }

}

