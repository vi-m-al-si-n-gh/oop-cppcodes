#include <iostream>
using namespace std;

class employee
{
    int id;
    int age;
    char dep_name[20];
    char name[15];
    int salary;
    public:
     void input()
    {
        cout<<"enter the name of the employee:";
        cin>>name;
        cout<<"enter the id of the employee:";
        cin>>id;
        cout<<"enter age of the employee:";
        cin>>age;
        cout<<"enter the salary of the employee:"<<endl;
        cin>>salary;
        cout<<"enter the Department name of the employee:";
        cin>>dep_name;
        return;
    }
    void output()
    {
        cout<<"name of the employee:"<<name<<endl;
        cout<<"id of the employee:"<<id<<endl;
        cout<<"age of the employee:"<<age<<endl;
        cout<<"salary of the employee:"<<salary<<endl;
        cout<<"Department name of the employee:"<<dep_name<<endl;
    }
};
int main()
{
    employee emp[30]; 
    int n, i;
    cout << "Enter Number of Employees - ";
    cin >> n;
    for(i = 0; i < n; i++) 
    emp[i].input();
    cout << "Employee Data -"<<endl;
    for(i = 0; i < n; i++) 
    emp[i].output();
    return 0;
}