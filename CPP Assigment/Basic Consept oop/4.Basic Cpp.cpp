// function to calculate the area of circle
#include<iostream>

class Circle{
private:
    double radius;

public:
    // Constructor
    Circle(double r):radius(r){}

    // Member function to calculate the area
    double getArea()
	{
        return 3.14*radius*radius;
    }

    // Member function to calculate the circumference
    double getCircumference()  
	{
        return 2*3.14*radius;
    }

    // Setter for radius
    void setRadius(double r) 
	{
        radius=r;
    }

    // Getter for radius
    double getRadius()  
	{
        return radius;
    }
};

int main() 
{
    // Create a Circle object
    Circle circle(5.0);

    // Display the area and circumference
    std::cout<<"Radius: "<<circle.getRadius()<<std::endl;
    std::cout<<"Area: "<<circle.getArea()<<std::endl;
    std::cout<<"Circumference: "<<circle.getCircumference()<<std::endl;

    

    return 0;
}

	

