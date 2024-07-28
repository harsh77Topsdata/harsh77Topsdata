#include<iostream>
using namespace std;

class H{
	protected:  //data mambers
	string name;    
	int age;
	
	public: 
	data()  // accept student and teachers name and age
	{
		cout<<"Enter  Name : ";
		cin>>name;
		cout<<"Enter Age : ";
		cin>>age;
	}	 
	display()  // dispaly student and teachers name and age
	{
		cout<<"Name : "<<name<<endl;  
		cout<<"Age : "<<age<<endl;
	}
};
class Student:public H{
	public:
		float percentage;
	    per()
		{
			cout<<"Enter Percentage : ";  //accept student Percentage
			cin>>percentage;
		}
		display1()
		{
			cout<<"Percentage is %: "<<percentage<<endl;   //display Percentage  
		}
		
};

class Teacher:public H{
	public:
		float salary;
		sal()
		{
			cout<<"Enter Your Salary : " ;  // accept salary 
			cin>>salary;
		}
		display2()
		{
			cout<<"Salary is : "<<salary<<endl;  // dispaly salary
		}
};



main()
{
	cout<<endl<<"Enter student's information:"<<endl;    //accept all information
	Student obj;          
	obj.data();
	obj.per();
	
	cout <<endl<< "Enter teacher's information:"<<endl;
	Teacher obj1;
	obj1.data();
	obj1.sal();
	
	cout<<endl<<"Student's information:"<<endl;	//display all information 
	obj.display();
	obj.display1();

    cout<<endl<<"Teacher's information:"<< endl; 
	obj1.display();
	obj1.display2();

}

