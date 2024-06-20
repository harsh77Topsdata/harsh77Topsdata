#include<stdio.h>
main()
{
    int i=0,n=9,n1=1,n2=2; 
    printf("Number Series:\n");
    printf("%d\t",n1); 
    printf("%d\t",n2); 
    for(i=3;i<=n;i++)
    {
    	if(i%2==1) 
    	{
    		n1=n1*3;
    		printf("%d\t",n1);
		}
		else 
		{
			n2=n2*3;
			printf("%d\t",n2);
		}
	}
}
