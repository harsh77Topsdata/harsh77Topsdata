#include <stdio.h>

struct Employee 
{
    int empNo;
    char empName[100];
    char address[200];
    int age;
};

void printEmployee(struct Employee emp) 
{
    printf("Employee Number: %d\n", emp.empNo);
    printf("Employee Name: %s\n", emp.empName);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
    printf("\n");
}

int main() {

    struct Employee employees[5];


    for(int i=0;i<5;i++) 
	{
        printf("Enter details for employee %d:\n",i+1);

        printf("Enter employee number: ");
        scanf("%d",&employees[i].empNo);

        printf("Enter employee name: ");
        scanf(" %[^\n]",employees[i].empName); 

        printf("Enter employee address: ");
        scanf(" %[^\n]",employees[i].address); 

        printf("Enter employee age: ");
        scanf("%d",&employees[i].age);

        printf("\n");
    }

   
    printf("Employee details:\n");
    for(int i=0;i<5;i++) 
	{
        printEmployee(employees[i]);
    }

    return 0;
}

