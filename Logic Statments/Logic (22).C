#include<stdio.h>

int main() 
{
    float radius,area,circumference;
    int PI;

    printf("Enter the radius of the circle:"); // Prompt user for the radius
    scanf("%f",&radius);

    area=PI*radius*radius; // Calculate the area

    circumference=2*PI*radius;  // Calculate the circumference

    printf("Area of the circle: %.2f\n", area); // Display the results
    printf("Circumference of the circle: %.2f\n", circumference);

}

