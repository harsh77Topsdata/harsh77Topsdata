#include<iostream>
using namespace std;

class calce{
	public:
		int a,b;
		f1(int a,int b)
		{
			cout<<"Enter the number a :";
			cin>>a;
			cout<<"Enter the number b :";
			cin>>b;
			
			cout<<"The number of addition :"<<a+b<<endl;
		}
		f1(float a,float b)
		{
			cout<<"Enter the number a :";
			cin>>a;
			cout<<"Enter the number b :";
			cin>>b;
			
			cout<<"The number of Subtriction :"<<a-b<<endl;
		}
		f1(double a,double b)
		{
			cout<<"Enter the number a :";
			cin>>a;
			cout<<"Enter the number b :";
			cin>>b;
			
			cout<<"The number of multiplication :"<<a*b<<endl;
		}
		f1()
		{
			
			cout<<"Enter the number a :";
			cin>>a;
			cout<<"Enter the number b :";
			cin>>b;
			
			cout<<"The number of division :"<<a/b<<endl;
		}
};
main()
{
	calce rr;
	rr.f1();
	rr.f1();
	rr.f1();
	rr.f1();
}
