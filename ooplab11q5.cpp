/*WAP to create a class student having certain details of a student. Using class template concept
input the details of 2 students and display to output screen.*/

#include<iostream>
using namespace std;

template<class T1, class T2>
class student
{
    T1 name[20];
    T2 roll;
    T2 marks;
    public:
    void getdata()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll: ";
        cin>>roll;
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main()
{
    student<char, int> s1;
    student<char, float> s2;
    cout<<"Enter details of student 1: "<<endl;
    s1.getdata();
    cout<<"Enter details of student 2: "<<endl;
    s2.getdata();
    cout<<"Details of student 1: "<<endl;
    s1.display();
    cout<<"Details of student 2: "<<endl;
    s2.display();
    return 0;
}