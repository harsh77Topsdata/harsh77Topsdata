#include<iostream>
using namespace std;

class mycalce{
	public :
		int a,b;
		add()
		{
			cout<<"Enter the a :";
			cin>>a;
			cout<<"Enter the b :";
			cin>>b;
			
			cout<<"addition is :"<<a+b<<endl;
		}
		sub()
		{
			cout<<"Enter the a :";
			cin>>a;
			cout<<"Enter the b :";
			cin>>b;
			
			cout<<"subtriction is :"<<a-b<<endl;
		}
		malti()
		{
			cout<<"Enter the a :";
			cin>>a;
			cout<<"Enter the b :";
			cin>>b;
			
			cout<<"multiplication is"<<a*b<<endl;
		}
		divid()
		{
		    cout<<"Enter the a :";
			cin>>a;
			cout<<"Enter the b :";
			cin>>b;
			
			cout<<"division is"<<a/b<<endl;
		}
	
};

main()
{
	mycalce obj;
	obj.add();
	obj.sub();
	obj.malti();
	obj.divid();
	
}
