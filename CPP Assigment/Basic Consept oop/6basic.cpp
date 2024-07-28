/*class called Person that has private member variables for name, age and country. 
Implement member functions to set and get the values of these variables*/
#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
    std::string country;

public:
    setName(std::string &name) 
	{
        this->name=name;   // Setters
    }
    std::string getName() 
	{
        return name;  // Getters
    }
    setAge(int age) 
	{
        this->age=age;
    }
    int getAge()  
	{
        return age;  // Getters
    }
	setCountry(std::string& country) 
	{
        this->country=country;
    }
    std::string getCountry()
	{
        return country;
    }
};

int main() {
    Person obj;
    obj.setName("Roman");
    obj.setAge(30);
    obj.setCountry("USA");

    std::cout<<"Name: "<<person.getName()<<std::endl;
    std::cout<<"Age: "<<person.getAge()<<std::endl;
    std::cout<<"Country:"<<person.getCountry()<<std::endl;

    return 0;
}

