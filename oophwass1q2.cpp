#include<iostream>
#include<math.h>
using namespace std;

class marks;

class student
{
    int age;
    int roll;
    char name[20];
    public:
    friend void output1(student student);
    void input1()
    {
        cout<<"Enter Name of the Students:"<<endl;
        cin>>name;
        cout<<"Enter Roll Number of the Students:"<<endl;
        cin>>roll;
        cout<<"Enter Age of the Students:"<<endl;
        cin>>age;
        return;
    }
};

class marks
{
    char grade[2];
    float mark;
    public:
    friend void output2(marks marks);
    void input2()
    {
            cout<<"Enter the Marks of the student:";
            cin>>mark;
            cout<<"Enter the Grade of the student:"<<endl;
            cin>>grade;
        return;
    }
};
void output1(student student)
    {
        cout<<"NAME OF THE STUDENT:"<<student.name<<endl;
        cout<<"AGE OF THE STUDENT:"<<student.age<<endl;
        cout<<"ROLL NUMBER OF THE STUDENT:"<<student.roll<<endl;
    }
void output2(marks marks)
    {
        cout<<"MARKS OF THE STUDENT:"<<marks.mark<<endl;
        cout<<"GRADE OF THE STUDENT:"<<marks.grade<<endl;
    }
int main()
{
    student s;
    marks m1,m2,m3;
    s.input1();
    m1.input2();
    m2.input2();
    m3.input2();
    output1(s);
    output2(m1);
    output2(m2);
    output2(m3);
    return 0;
}