#include<iostream>
using namespace std;

class Myfood{
	public:
		fun()
		{
			cout<<"\t\t\t----------Tops Fast Food----------"<<endl;  // The name of food branch 
			cout<<"Hello Rakesh"<<endl; //customer name and enter the you choice the order and choice the food 
			cout<<"What Would you like to order"<<endl;
		}
		fun1()
		{
			cout<<"\t\t\t\t----------Manue----------"<<endl; //see the all menue in display
		    cout<<" 1 Pizza"<<endl;
		    cout<<" 2 Burgar"<<endl;
		    cout<<" 3 Sandwitch"<<endl;
	        cout<<" 4 Rolls"<<endl;
	        cout<<" 5 Biryani"<<endl;
		}
		
};

class Myfood2:public Myfood{
	public:
		fun2()
		{
		char choice,Price;
			
		cout<<"Enter the Choice :";
		cin>>choice;
		
		switch(choice) //diffarant choice avalible  
		{
			case '1':
				cout<<"Pizza"<<endl;
				cout<<"1.Paneer Pizza Rs.120"<<endl;
				cout<<"2.Cheese Pizza Rs.150"<<endl;
				cout<<"3.Pizza Rs.150"<<endl;
		        break;
				
			case '2':
				cout<<"Burgar"<<endl;
				cout<<"1.Normal Burgar Rs.65"<<endl;
				cout<<"2.Burgar Rs.50"<<endl;
				cout<<"3.Cheese Burgar Rs.150"<<endl;
				break;
			
			case '3':
				cout<<"Sandwitch"<<endl;
				cout<<"1.Crispy.Sandwitch Rs.220"<<endl;
				cout<<"2.Veg.Sandwitch Rs.250"<<endl;
				cout<<"3.Club Sandwitch Rs.185"<<endl;
				break;
		    
			case '4':
				cout<<"Rolls"<<endl;
				cout<<"1.veg Rolls Rs.120"<<endl;
				cout<<"2.Cheese Paneer Rolls Rs.150"<<endl;
				cout<<"3.Rolls Rs.140"<<endl;
				break;
			
			case '5':
				cout<<"Biryani"<<endl;
				cout<<"1.Biryani Rs.200"<<endl;
				cout<<"2.Biryani veg Rs.250"<<endl;
				cout<<"3.Briyani2.0 Rs.150"<<endl;
				break;
	    }
    	}
};

class Myfood3:public Myfood2{
	public:
		fun3()
		{
			int quntity,food,Price; //calculate the bill your order gentreat bill
			cout<<"Please Enter what would you like :";
		    cin>>food;
	        cout<<"Please Enter the quntity :"; ///choice quntity bill
	        cin>>quntity;
	        cout<<"Enter the Price :";
		    cin>>Price;
		    
		    int totalbill=quntity*Price;
		    cout<<"Your bill :"<<quntity*Price<<endl;
			
		}
		fun4()
		{
			
			cout<<"\t\t\t--------------Your Order--------------"<<endl;  // you are anything order yes or no 
			cout<<"Your order Will be delivered in 40Minits"<<endl;
			cout<<"Thank you for ordering from Tops fast food"<<endl;
			cout<<"What you like to order anything else? Yes/No";
		}
};




main()
{
	// declared all class in function
	Myfood3 obj;
	obj.fun();
	obj.fun1();
	obj.fun2();
	obj.fun3();
	obj.fun4();

	
}
	
