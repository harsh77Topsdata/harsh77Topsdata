//functions to calculate the rectangle's area and perimeter
#include<iostream>
class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l,double w)
	{
		length,width;
	}
    double getArea()
	{
        return length*width; // Member function to calculate the area
    }
    double getPerimeter() 
	{
        return 2*(length+width); // Member function to calculate the perimeter
    }
    setLength(double l)
	{
        length = l;  // Setter for length
    }
    setWidth(double w)
	{
        width = w; // Setter for width
    }
    double getLength()  
	{
        return length; // Getter for length
    } 
    double getWidth() 
	{
        return width;  // Getter for width
    }
};

int main() 
{
    // Create a Rectangle object
    Rectangle rect(4,5);

    // Display the area and perimeter
    std::cout<<"Length: "<<rect.getLength()<<std::endl;
    std::cout<<"Width: "<<rect.getWidth()<<std::endl;
    std::cout<<"Area: "<<rect.getArea()<<std::endl;
    std::cout<<"Perimeter: "<<rect.getPerimeter()<<std::endl;
    
	return 0;
}

