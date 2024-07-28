#include<iostream>
using namespace std;

class Head{
	private:
		int month,year,day;   //declaration all
		
	public:
		date()
		{
			int month,year,day;  //declare public 
		}
		
		//set and get method are day month year
		getmonth(int month) 
		{
			this->month=month;
		}
		setmonth()
		{
			cout<<"Enter the month :"<<this->month<<endl;
		}
		getyear(int year)
		{
			this->year=year;
		}
		setyear()
		{
			cout<<"Enter the year :"<<this->year<<endl;
		}
		getday(int day)
		{
			this->day=day;
		}
		setday()
		{
			cout<<"Enter the day :"<<this->day<<endl;
		}
};

main()
{
	Head obj;  //output day or month or yera
	obj.getmonth(5);
	obj.setmonth();
	obj.getyear(2004);
	obj.setyear();
	obj.getday(30);
	obj.setday();
}
