//banking system
#include<iostream>
using namespace std;

class Bank{
private:
    std::string name;
    int accNumber;
    std::string typeOfAcc;
    double balanceAmount;

public:
	// Constructor to initialize the account
    BankAcc(std::string name,int accNumber,std::string accType,double balance) {}

    assignValues(std::string name,int accNumber,std::string accType,double balance) 
	{
        name=name;          // Function to assign values
        accNumber=accNumber;
        typeOfAcc=accType;
        balanceAmount=balance;
    }

    depositAmount(double amount)   // Function to deposit an amount
	{
        if(amount>0) 
		{
            balanceAmount+=amount;
            std::cout<<"Deposited: "<<amount<<endl;
        } 
		else 
		{
            std::cout<<"Invalid deposit amount.endl";
        }
    }

    // Function to withdraw an amount after checking balance
    withdrawAmount(double amount) 
	{
        if(amount>0&&amount<=balanceAmount) 
		{
            balanceAmount-=amount;
            std::cout<<"Withdrawn: "<<amount<<endl;
        } 
		else if(amount>balanceAmount) 
		{
            std::cout<<"Insufficient balance.endl";
        } 
		else 
		{
            std::cout << "Invalid withdrawal amount.endl";
        }
    }

    // Function to display name and balance
    display() 
	{
        std::cout<<"Name: "<<name<<endl;
        std::cout<<"Balance: "<<balanceAmount<<endl;
    }
};

int main() 
{
    
    Bank obj;  // Creating a bank account object
    obj.display(); // Display initial details
	obj.depositAmount(500);   // Deposit amount
    obj.display();   // Display details after deposit
    obj.withdrawAmount(2000);  // Withdraw amount
    obj.display();  // Display details after withdrawal

}

