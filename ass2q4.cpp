//array as a member of the class
#include <iostream>
using namespace std;
class student
{
    int roll;
    int age;
    int mark[5];
    float avg;
    char name[15];
    char Sname[15];
    public:
    void input()
    {
        cout<<"enter the roll number: ";
        cin>>roll;
        cout<<"enter the age number :";
        cin>>age;
        for(int i =0;i<5;i++)
        {
            cout<<"enter the mark:"<<endl;
            cin>>mark[i];
        }
        cout<<"enter the name of the student: ";
        cin>>name;
        cout<<"enter section name of the student: ";
        cin>>Sname;
        return;
    }
    void output();
   
};
 inline void student::output()
    {
        int sum = 0;
         for(int i =0;i<5;i++)
        {
           sum= sum+mark[i]; 
        }
        avg = sum/5.0;
        cout<<"Roll Number = "<<roll<<" age is "<<age<<" Name is "<<name<<" section Name is "<<Sname<<" and average mark is "<<avg;
    }
int main()
{
    student stu[30]; 
    int n, i;
    cout << "Enter Number of Students - ";
    cin >> n;
    for(i = 0; i < n; i++) 
    stu[i].input();
    cout << "Students Data - " << endl;
    for(i = 0; i < n; i++) 
    stu[i].output();
    return 0;
}