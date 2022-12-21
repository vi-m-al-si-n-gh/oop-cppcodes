#include <iostream>

using namespace std;
    
    class employee
    {
        protected:
        string name;
        int roll,id;
        public:
        void input1()
        {
            cout<<"Enter name : ";
            cin>>name;
            cout<<"Roll : ";
            cin>>roll;
            cout<<"ID : ";
            cin>>id;
        }
        void display1()
        {
            cout<<"NAME - "<<name<<endl;
            cout<<"ROLL - "<<roll<<endl;
            cout<<"ID - "<<id<<endl;
        }
    };
    class department : private employee
    {
        public:
        string departmentName;
        int departmentId;
        public:
        void input2()
        {
            input1();
            cout<<"Department Name : ";
            cin>>departmentName;
            cout<<"Department ID : ";
            cin>>departmentId;
        }
        void display2()
        {
            display1();
            cout<<"Department Name - "<<departmentName<<endl;
            cout<<"Department ID - "<<departmentId<<endl;
        }
    };
    class grade : public department
    {
        protected:
        char s_grade;
        float basicSalary;
        public:
        void input3()
        {
            cout<<"Grade (a || b) : ";
            cin>>s_grade;
            cout<<"Basic salary : ";
            cin>>basicSalary;
        }
        void display3()
        {
            cout<<"GRADE - "<<s_grade<<endl;
            cout<<"Basic Salary - "<<basicSalary<<endl;
        }
    };
    
int main()
{
    grade g;
    g.input2();
    g.input3();
    g.display2();
    g.display3();

    return 0;
}