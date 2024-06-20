#include<stdio.h>

int main() 
{
  
  char fname[20], mname[20], lname[20];
  printf("Enter The First Name, Middle Name and Last Name \n");
  scanf("%s %s %s", fname, mname, lname);
  printf("Abbreviated Name: ");
  printf("%c. %c. %s\n", fname[0], mname[0], lname);
  return 0;

}



	

