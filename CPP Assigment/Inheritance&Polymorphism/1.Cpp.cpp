#include<iostream>
using namespace std;

class A{
	public:
		string name;
};

class Batsman:public A{
	public:
	int totalruns;  //data member 
	float Averageruns;
	int bestperformance;
	int match;
	
	input()
	{
		cout<<"Enter Number Of Matches Played: ";   // enter matches
		cin>>match;
        cout<<"Enter total runs scored: ";		//enter total runs 
		cin>>totalruns;
		cout<<"Enter best performance : ";		//enter best performance
		cin>>bestperformance;
	}
	Average()
	{
		Averageruns=totalruns/(float)match;			//calculate Averageruns
		
	}
    dispaly()  	// dispaly all  Cricketer Details 
	{
		cout<<" * * * * Cricketer Details * * * *"<<endl;
		cout<<" Cricketer Name : "<<name<<endl;
		cout<<" Matches Played : "<<match<<endl;
		cout<<" Total Runs : "<<totalruns<<endl;
		cout<<" Average Runs : " <<Averageruns<<endl;
		cout<<" Best Performance : "<<bestperformance<<endl;
	}
	
}; 

main()
{
	string name;
		cout<<"Enter Cricketer Name : ";  //enter name of Cricketer
		getline(cin,name);
		
		Batsman obj; // object for class 
		obj.input();
		obj.Average();
	    obj.dispaly();
		
}

