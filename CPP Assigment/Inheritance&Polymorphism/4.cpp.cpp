#include<iostream>
using namespace std;

class A{
	public:
		fun1()
		{
			
			string name;
			int rollno;
			cout<<"Enter the name :";  // student name
			cin>>name;
			cout<<"Enter the roll no :"; // student roll no
			cin>>rollno;
		}
};

class B{
	public:
		fun2()
		{
			int sci,maths,ss,guj,eng; // user input marks
			cout<<"Sci :";
			cin>>sci;
			cout<<"Maths :";
			cin>>maths;
			cout<<"Eng: ";
			cin>>eng;
			cout<<"S.s :";
			cin>>ss;
			cout<<"Guj :";
			cin>>guj;
		}
};

class C:public A,public B{
	public:
		fun3()
		{ 
		    
			int avarage,sci,maths,ss,guj,eng,total;
			total=sci+maths+eng+ss+guj;   //all subject total
			avarage=total*100/500;  // find avarage and total
			cout<<"Total is :"<<total;
			cout<<"avarage is :"<<avarage;
		}
};

main()
{
	C obj;
	obj.fun1();
	obj.fun2();
	obj.fun3();
	
}
