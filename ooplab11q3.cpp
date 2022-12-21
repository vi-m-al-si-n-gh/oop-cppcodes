/*WAP to create a class employee that has name, age, grade, employee code and monthly salary of the
 employee. Input the details from keyboard and assign using necessary member function. 
 Store the details of employee 1 to a file and then read those details to another employee 2 
 and print the details to output screen by calling member functions.*/
#include <iostream>
#include <fstream>
using namespace std;

class employee
{
    char name[20];
    int age;
    char grade;
    int code;
    float salary;

public:
    void getdata();
    void putdata();
    void storedata();
    void readdata();
};

void employee::getdata()
{
    cout << "Enter name of employee: ";
    cin >> name;
    cout << "Enter age of employee: ";
    cin >> age;
    cout << "Enter grade of employee: ";
    cin >> grade;
    cout << "Enter code of employee: ";
    cin >> code;
    cout << "Enter salary of employee: ";
    cin >> salary;
}

void employee::putdata()
{
    cout << "Name of employee is: " << name << endl;
    cout << "Age of employee is: " << age << endl;
    cout << "Grade of employee is: " << grade << endl;
    cout << "Code of employee is: " << code << endl;
    cout << "Salary of employee is: " << salary << endl;
}

void employee::storedata()
{
    ofstream fout;
    fout.open("employee.txt", ios::out);
    fout.write((char *)this, sizeof(*this));
    fout.close();
}

void employee::readdata()
{
    ifstream fin;
    fin.open("employee.txt", ios::in);
    fin.read((char *)this, sizeof(*this));
    fin.close();
}

int main()
{
    employee e1, e2;
    e1.getdata();
    e1.storedata();
    e2.readdata();
    e2.putdata();
    return 0;
}