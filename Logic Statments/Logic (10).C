#include <stdio.h>

int main()
{
	char fname[30],sname[30],lname[30];
	
	printf("enter the country name :");
	scanf("%s %s %s",fname,sname,lname);
	
	printf("Abbreviated Name:");
	scanf("%c %c %c\n",fname[30],sname[30],lname[0]);
}
