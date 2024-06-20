#include<stdio.h>

main()
{
	int maths,phy,chem,totalmarks,totalmathsphy;
	printf("Enter the maths marks :");
	scanf("%d",&maths);
	printf("Enter the phy marks :");
	scanf("%d",&phy);
	printf("Enter the chem marks :");
	scanf("%d",&chem);
	printf("Enter the total marks maths,phy,chem :");
	scanf("%d",&totalmarks);
	printf("total marks maths and phy:");
	scanf("%d",&totalmathsphy);
	
	if(phy>=55 && chem>=50 && maths>=65 && totalmarks>=190) 
	{
        printf("The candidate is eligible");
    } 
	else if(totalmathsphy>= 140) 
	{
        printf("The candidate is eligible");
    } 
	else 
	{
        printf("The candidate is not eligible");
    }
	

	
}
