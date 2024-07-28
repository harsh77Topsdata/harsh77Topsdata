//swap the two numbers using friend function without using third variable
#include<iostream>
using namespace std;

class H{
	private:
		int a,b;
		
		friend class J;
};

class J{
	public:
		fun1(H &t)
		{
			int a,b,temp;
			cout<<"Enter the number A :";
			cin>>t.a;
			cout<<"Enter the number B :";
			cin>>t.b;
			
			temp=t.a;
			t.a=t.b;
			t.b=temp;
			
			cout<<"A after sweep"<<b<<endl;
			cout<<"B after sweep"<<a<<endl;
		}
	
};

main()
{
	H obj;
	J obj1;
	obj1.fun1(obj);
	
}
