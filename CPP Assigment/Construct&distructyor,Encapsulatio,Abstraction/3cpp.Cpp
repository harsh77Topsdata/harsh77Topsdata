#include<iostream>
using namespace std;

class Mycar{
	private:
		string company;   // declar all class private member
		string model;
		int year;
		
	public: 
		car()    //after declar public class
		{
			company,model,year;
		}
		// getter and setter method 	
		getcompany(string company)
	    {
	    	this->company=company;
		}
		setcompany()
		{
			cout<<"Enter the company :"<<this->company<<endl;
		}
		getmodel(string model)
	    {
	    	this->model=model;
		}
		setmodel()
		{
			cout<<"Enter the model :"<<this->model<<endl;
		}
		getyear(int year)
	    {
	    	this->year=year;
		}
		setyear()
		{
			cout<<"Enter the year :"<<this->year<<endl;
		}
		
		void displayDetails()
		{
			cout<<"Car Details:"<<endl;
            cout<<"Company: "<<company<<endl;
            cout<<"Model: "<<model<<endl;
            cout<<"Year: "<<year<<endl;
        }
};

main()
{
	Mycar obj;    //display all detailes 
	obj.getcompany("Honda");   
	obj.setcompany();
	obj.getmodel("blackcity");
	obj.setmodel();
	obj.getyear(2004);
	obj.setyear();
}
