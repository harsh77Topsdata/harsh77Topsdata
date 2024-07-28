#include<iostream>
using namespace Std;

class Head{
	public:
	static checkTriangle(int x,int y,int z) // is equilateral or isosceles or scalene
    {
        if (x==y && y==z ) 	// Check for equilateral triangle
		{
		    Console.WriteLine("Equilateral Triangle");
        }
        else if (x==y||y==z||z==x)  	// Check for isosceles triangle
		{
			Console.WriteLine("Isosceles Triangle");
		}
		else  // Otherwise scalene triangle
		{
			Console.WriteLine("Scalene Triangle");
		}
    }


Main()
{
	int x=8,y=7,z=9;   // Given sides of triangle

	checkTriangle(x,y,z);  	// Function call
}

}



