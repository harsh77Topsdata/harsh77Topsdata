//the area of circle, rectangle and triangle using Function Overloading
#include<iostream>
using namespace std;

class H{
	public:
		fun1(double length,double breadth,double area)
		{
		cout<<"Enter the length of the rectangle: ";
        cin>>length;
        cout<<"Enter the breadth of the rectangle: ";
        cin>>breadth;
        
        area=length*breadth; // Calculate the area

        cout<<"The area of the rectangle is: "<<area<<endl;
        }
        
		fun1(float base,float height,float area)
        {
        	cout<<"Enter the base of the triangle: ";  //Ask the user to input the base and height
            cin>>base;
            cout<<"Enter the height of the triangle: ";
            cin>>height;
 
            area=0.5*base*height;  // Calculate the area
            
			cout<<"The area of the triangle is: "<<area<<endl;  // Output the area
        }
        
        fun1()
        { 
		int radius,area;  // Declare variables for radius and area
        
		cout<<"Enter the radius of the circle: ";  // Ask the user to input the radius
        cin>>radius;
        
		area=3.14*radius*radius; // Calculate the area

       cout<<"The area of the circle is: "<<area<<endl; // Output the area
        }
         
};

main()
{
	H obj;
	obj.fun1();
	obj.fun1();
	obj.fun1();
	
}
