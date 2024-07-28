#include <iostream> 
using namespace std; 

// Function template to swap two numbers 
template<class T> 
int Swepnumber(T& x, T& y) 
{ 
	T t; 
	t = x; 
	x = y; 
	y = t; 
	return 0; 
} 

int main() 
{ 
	int a,b; 
	a=10,b=20;  
	cout << a << " " << b << endl; 
	return 0; 
}

