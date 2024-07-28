#include<iostream>
using namespace std;

class A{
	protected:
		int a,b;
		A()
		{
			cout<<"This is a constructer"<<endl;
		}
};

class B{
	public:
		fun1()
		{
			cout<<"This is function of class B"<<endl;
		}
};

class C:public A,public B{
	public:
		fun2()
		{
			cout<<"Enter A :"<<endl;
			cin>>a;
			cout<<"Enter B :"<<endl;
			cin>>b;
			
			cout<<"A :"<<a<<endl;
			cout<<"B :"<<b<<endl;
		}
};

main()
{
	C obj;
	obj.fun1();
	obj.fun2();
}
