#include<iostream>
#include<math.h>
using namespace std;

class employee
{
    int id;
    char d_name[20];
    char name[20];
    int salary;
    public:
    employee(){}
    employee(int k){}
    employee(employee &k){}
    friend void show(employee e);
    void get()
    {
        cout<<"Enter Name of the Employee:"<<endl;
        cin>>name;
        cout<<"Enter Department Name of the Employee:"<<endl;
        cin>>d_name;
        cout<<"Enter id of the Employee:"<<endl;
        cin>>id;
        cout<<"Enter Salary of the Employee:"<<endl;
        cin>>salary;
        return;
    }
    ~employee(){}
};
void show(employee e){
    cout<<"NAME OF THE STUDENT:"<<e.name<<endl;
    cout<<"ID OF THE STUDENT:"<<e.id<<endl;
    cout<<"DEPARTMENT NAME OF THE STUDENT:"<<e.d_name<<endl;
    cout<<"SALARY OF THE STUDENT:"<<e.salary<<endl;
}
int main()
{
    employee e3,e1(5),e2(e1);
    e1.get();
    // show(e1);
    show(e2);
    return 0;
}