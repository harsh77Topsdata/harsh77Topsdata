#include<stdio.h>

add()
{
	int a,b; //addition
	printf("Enter the number a :");
	scanf("%d",&a);
	printf("Enter the number b :");
	scanf("%d",&b);
	
	printf("\nThe number of addition %d",a+b); //output
}

sub()
{
	int a,b;//subtriction
	printf("Enter the number a :");
	scanf("%d",&a);
	printf("Enter the number b :");
	scanf("%d",&b);
	
	printf("\nThe number of subtriction %d",a-b); //output
	
}

malti()
{
	int a,b; //multiplication
	printf("Enter the number a :");
	scanf("%d",&a);
	printf("Enter the number b :");
	scanf("%d",&b);
	
	printf("\nThe number of multiplication %d",a*b); //output
}

divid()
{
	int a,b; //division
	printf("Enter the number a :");
	scanf("%d",&a);
	printf("Enter the number b :");
	scanf("%d",&b);
	
	printf("\nThe number of division %d",a/b); //output
}

main()
{
	int choice,menu,a,b;
	printf("-------Menu-------");
	printf("\nEnter the addition");
	printf("\nEnter the subtriction");
	printf("\nEnter the multiplication");
	printf("\nEnter the division");
	
	
	while(1)
	{
		printf("\nEnter the choice :");
	    scanf("%d",&choice);
	    
	    if(choice==1)
	    {
	    	add();
	    	break;
	    }
		else if(choice==2)
		{
			sub();
			break;
		}
		else if(choice==3)
		{
			malti();
			break;
		}
		else if(choice==4)
		{
			divid();
			break;
		}
		else 
		{
			printf("Invalid choice!!");
			break;
		}
		
	}
	
}



	


