#include <stdio.h>

int main() 
{
    float monthlySalary, annualSalary;
    float annual;
    
    
    printf("Enter your monthly salary: ");
    scanf("%f", &monthlySalary);

    
    annualSalary=monthlySalary * 12;
    
    printf("Your annual salary: $%f\n", annualSalary);

    return 0;
}

