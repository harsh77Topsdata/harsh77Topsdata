#include<iostream>
using namespace std;

class A{
	public:
		int a,b;
		f1(float a,float b)
		{
			cout<<"Enter the number A :";
			cin>>a;
			cout<<"Enter the number B :";
			cin>>b;
			
			cout<<"The number of addition :"<<a+b<<endl;
		}
		f1(int a,int b)
		{
			cout<<"Enter the number A :";
			cin>>a;
			cout<<"Enter the number B :";
			cin>>b;
			
			cout<<"The number of Subtriction :"<<a-b<<endl;
		}
		f1()
		{
			cout<<"Enter the number A :";
			cin>>a;
			cout<<"Enter the number B :";
			cin>>b;
			
			cout<<"The number of Multiplication :"<<a*b<<endl;
		}
		f1(double a,double b)
		{
			cout<<"Enter the number A :";
			cin>>a;
			cout<<"Enter the number B :";
			cin>>b;
			
			cout<<"The number of Division :"<<a/b<<endl;
		}
};

main()
{
	A obj;
	obj.f1(12.5,13.5);
	obj.f1(125,123);
	obj.f1();
	obj.f1();
	
}
