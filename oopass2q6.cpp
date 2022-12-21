// 6.Write a program in C++ to create a class library having total no. of books and
// department name as its member. Create another class student which stores student
// details like name, roll no, section , year of admission. These above two classes are
// derived from a class university which is having university name, total strength of
// student as its private member. Input all the details and display using user defined
// member function.
#include <iostream>
#include <cstring>

using namespace std;

    class university
    {
        private:
        string universityName;
        int totalStrength;
        public:
        void input1(string name1,int num)
        {
            universityName=name1;
            totalStrength=num;
        }
        
        void display1()
        {
            cout<<"UNIVERSITY NAME : "<<universityName<<endl;
            cout<<"Total Strength : "<<totalStrength<<endl;
        }
        
    };
    
    class library : public university
    {
        protected:
        int totalNoBooks;
        string departmentName;
        public:
        void input2()
        {
            cout<<"Total Books - ";
            cin>>totalNoBooks;
            cout<<"Department Name - ";
            cin>>departmentName;
        }
        
        void display2()
        {
            cout<<"Total Books : "<<totalNoBooks<<endl;
            cout<<"Department Name : "<<departmentName<<endl;
        }
    };
    
    class student : public university
    {
        protected:
        string name;
        int roll,yearOfAdmission;
        string section;
        public:
        void input3()
        {
            cout<<"Student Name - ";
            cin>>name;
            cin>>totalNoBooks;
            cout<<"Roll - ";cin>>roll;
            cout<<"Year of Admission - ";cin>>yearOfAdmission;
            cout<<"Section - ";cin>>section;
        }
        
        void display3()
        {
            cout<<"Student Name : "<<name<<endl;
            cout<<"Roll : "<<roll<<endl;
            cout<<"Year of Admission : "<<yearOfAdmission<<endl;
            cout<<"Section : "<<section<<endl;
        }
    };
    
int main()
{
    student s;
    library l;
    string Uname;
    int strength;
    cout<<"Enter university name - ";
    cin>>Uname;
    cout<<"Enter total strength of university - ";
    cin>>strength;
    s.input1(Uname,strength);
    l.input2();
    s.input3();
    s.display1();
    l.display2();
    s.display3();

    return 0;
}