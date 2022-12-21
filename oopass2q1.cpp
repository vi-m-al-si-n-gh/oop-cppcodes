#include<iostream>
using namespace std;

class student
{
    float marks;
    int roll;
    char name[20];
    public:
    student(){}
    void get()
    {
        cout<<"Enter Name of the Students:";
        cin>>name;
        cout<<"Enter Roll Number of the Students:";
        cin>>roll;
        cout<<"Enter Marks of the Students:";
        cin>>marks;
        return;
    }
    void show()
    {
        cout<<"Enter Name of the Students:"<<name<<endl;
        cout<<"Enter Roll Number of the Students:"<<roll<<endl;
        cout<<"Enter Marks of the Students:"<<marks<<endl;
        return;
    }
    ~student(){cout<<"Deallocated";}
};

int main()
{
    student s1,s2;
    s1.get();
    s2.get();
    cout<<"Details displaying:-"<<endl;
    s1.show();
    s2.show();
    return 0;
}


