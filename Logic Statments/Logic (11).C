#include <stdio.h>

int main() 
{
    float salary, percentage, premium;
float a;
    // Get user input for salary and percentage
    printf("Enter your salary: ");
    scanf("%f", &salary);

    printf("Enter the percentage of salary as premium: ");
    scanf("%f", &percentage);

    a= (salary * percentage) / 100.0;
    printf(" premium%f",a);
    return 0;
}

