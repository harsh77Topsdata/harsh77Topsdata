#include<iostream>
using namespace std;

class Add{
    public:
	char s1[25],s2[25];   // Classes object of string

    Add(char str1[],char str2[])  // Parameterized Constructor
	{
		strcpy(this->s1, str1);     // Initialize the string to class object
		strcpy(this->s2, str2);
	}

	void operator+()  	// Overload Operator+ to concat the string
    {
		cout<<"\nConcatenation: "<<strcat(s1, s2);
	}
};

int main()
{
	char str1[]="Roman";     // Declaring two strings
	char str2[]="Head of the table";

	Add a1(str1,str2);  // Declaring and initializing the class
	+a1;

}

