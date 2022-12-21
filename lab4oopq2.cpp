/*write  a program to create a class employee having employee name, department name, id , monthly 
salary as its member. Initialize the details by accepting input from keyboard and user defined 
parametrized constructor function. Create a user defined copy constructor to copy the properties
of one instance to another and display the details by calling a friend function.*/
#include <iostream>
using namespace std;

class employee{
    string name,department;
    long long int id,salary;
    public:
    employee(string name1);
    employee(employee &s1);
    void display();
};

employee :: employee (string name1){
    this->name=name1;
    cout<<"Enter department : ";
    cin>>department;
    cout<<"Enter id : ";
    cin>>id;
    cout<<"Enter your salary : ";
    cin>>salary;
}

employee :: employee(employee &s1){
    cout<<"copy invokes";
    name=s1.name;
    department=s1.department;
    id=s1.id;
    salary=s1.salary;
}

void employee :: display(){
    cout<<"Name : "<<name<<endl;
    cout<<"Department : "<<department<<endl;
    cout<<"ID : "<<id<<endl;
    cout<<"Salary : "<<salary<<endl;
}

int main(){
    string name;
    cout<<"Enter name : ";
    getline(cin,name);
    employee e1(name);
    employee e2(e1);
    cout<<endl<<"*Details of employee*"<<endl;
    e2.display();
    return 0;
}