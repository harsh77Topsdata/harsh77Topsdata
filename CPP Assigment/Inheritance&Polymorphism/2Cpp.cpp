#include<iostream>
using namespace std;

class Shape{
protected:                   // Base class
    double width;
    double height;

public:
    setDimensions(double w,double h)
	{
        width=w;
        height=h;
    }
};

//drived class 
class Rectangle:public Shape 
{
public:
    getArea()   //declare the class 
	{
        return width*height;
    }
};

int main() 
{
    Rectangle obj;   // obj declare and all type of source in input
    double w,h;
    cout<<"Enter width of the rectangle: ";
    cin>>w;
    cout<<"Enter height of the rectangle: ";
    cin>>h;

    obj.setDimensions(w,h);
    cout<<"Area of the rectangle: "<<obj.getArea();

}

