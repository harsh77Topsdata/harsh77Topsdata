#include<iostream>
using namespace std;

class A{
	public:
		prime()
		{
			//find the prime number 
			int n,i,c=0;
			cout<<"Enter the prime number :";
			cin>>n;
			
			for(i=0;i<=n;i++)
			{
				if(n%=2)
				{
					c++;
				}
			}
			if(c==0)
			{
				cout<<"This is a prime number"<<endl;
			}
			else 
			{
				cout<<"This is a not prime number"<<endl;
			}
		}
};

class B:public A{
	public:
		//find a factoril number
		fact()
		{
			int n,i,fact;
			cout<<"Enter the number :";
			cin>>n;
			
			for(i=1;i<=n;i++)
			{
				fact=fact*i;
			}
			cout<<"Factorial is :"<<fact<<endl;
			
		}
	
};

class C:public B{
	public:
		//find addition 
		add()
		{
			int a,b;
			cout<<"Enter the number A :"; //find user input
			cin>>a;
			cout<<"Enter the number B :";
			cin>>b;
			
			cout<<"The number of addition :"<<a+b;
		}
};

main()
{
	C obj;
	obj.prime();
	obj.fact();
	obj.add();
}
