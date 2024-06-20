#include <stdio.h>

main()
{
	int i,j,temp,ch;
	int a[i];
	for(i=0;i<4;i++)
	{
		printf("\n enter the eliments :");
		scanf("%d",&a[i]);
	}
	
	printf("press 1 for ascending");
	printf("\npress 2 for desc");
	printf("\npress 3 for exit");
	
	while(1)
	{
		printf("\n enter the choice : ");
		scanf("%d",&ch);
		
		if(ch==1)
	{
		
		for(i=0;i<4;i++)
	{
	for(j=i+1;j<4;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		
	}
    }
	    for(i=0;i<4;i++)
	{
		printf("sorted elimentsm %d\n",a[i]);
	    
	}
}
		
	else if(ch==2)
    {
    	for(i=0;i<4;i++)
	{
	for(j=i+1;j<4;j++)
	{
		if(a[i]<a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		
	}
    }
    for(i=0;i<4;i++)
	{
		printf("sorted elimentsm %d\n",a[i]);
}
	}	

	else if(ch==3)
	{
		printf("exit");
		break;
	}
	else 
	{
		printf("invalid");
		break;
	}
		
	}
		
		
	
}
