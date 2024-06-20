#include<stdio.h>

int main()
{
	char names[5][50];
	int i,n,strlen;
	for(i=0;i<=5;i++)
	{
		printf("\nEnter the name :",i+1);
		scanf("%d",&n);
		
		size_t len = strlen(names[i]);
        if(len>0 && names[i][len-1] =='\n') 
		{
            names[i][len-1] ='\0';
        }
	}
	printf("\nThe name of student %d",&n);
	
	for(i=0;i<5;i++)
	{
		printf("\n%d",n);
	}
	
}
