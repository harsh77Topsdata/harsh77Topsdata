#include<iostream>
using namespace std;

class J{
	public :
		int rollnumber;   	//data mamber
		roll(int roll)		//parameterized function
		{
			rollnumber=roll;
	    }
};
class Test:public J{
	public:
		float submark1,submark2;           //deta mamber
		mark(float mark1,float mark2)
		{
			submark1=mark1;
			submark2=mark2;
	    }
};
class Result:public Test{
	public:
	    display()
		{
		cout<<endl<<"All Information of Students "<<endl;
		cout<<"Roll Number: "<<rollnumber<<endl;
        cout<<"Subject 1 Marks: "<<submark1<<endl;
        cout<<"Subject 2 Marks: "<<submark2<<endl;
        cout<<"Total Marks: "<<submark1+submark2<<endl;
		}
			
		
};

main()
{		
		Result wobj;
		int roll;
		cout<<"Enter Your Roll Number : ";		//accept rollnumber
		cin>>roll;
		obj.roll(roll);
		
		float mark1,mark2;
		cout<<"Enter marks of Subject 1: ";		//accept mark1 and mark 2 from user
		cin>>mark1;
		cout<<"Enter marks of Subject 2: ";
		cin>>mark2;
		obj.mark(mark1,mark2);
		
		obj.display();						//call display function
	
		
}

