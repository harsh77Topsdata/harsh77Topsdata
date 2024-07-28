#include<iostream>
using namespace std;

class Employee{
private:
    std::string name;
    int employeeID;
    double salary;

public:
    Employee(std::string&empName,int empID,double empSalary) // Constructor
    {}
    
    setSalary(double performance)
	{
        salary=salary*(1+performance);  // Assume performance rating 
    }

    display()  // Function to display employee details
	{
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"Employee ID: "<<employeeID<<std::endl;
        std::cout<<"Salary: "<<salary<<std::endl;
    }
};

int main() 
{
    
    Employee emp;  // Create an Employee object

    std::cout<<"Initial Employee Details:"<<std::endl; // Display initial employee details
    emp.display();

    double performance;   // Set salary based on performance rating
    std::cout<<"\nEnter performance : ";
    std::cin>>performance;
    emp.setSalary(performance);
    
    std::cout<< "\nUpdated Employee Details:"<<std::endl;  // Display updated employee details
    emp.display();

}

