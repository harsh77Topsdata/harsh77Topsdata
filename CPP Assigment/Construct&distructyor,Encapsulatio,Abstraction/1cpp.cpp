#include <iostream>
using namespace std;

inline int multiply(int a,int b)  // Inline function for multiplication
{
    return a*b;
}

inline int cubic(int a)   // Inline function for cubic value
{
    return a*a*a;   
}

int main() 
{
    int n1,n2;
   
    cout<<"Enter the 1 numbers : ";  // Input values for multiplication
    cin>>n1;
    cout<<"Enter the 2 numbers : ";
	cin>>n2;

    cout<<"The number of multiple :"<<n1*n2<<endl;  // Display multiplication result
    
    int num;
    
	cout<<"Enter a number to find cubic value: ";  // Input value for cubic calculation
    cin >> num;

    cout<<"Cubic value of "<<num<<" is: "<<cubic(num)<<endl; // Display cubic value result

}

