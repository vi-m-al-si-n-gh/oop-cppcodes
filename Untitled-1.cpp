//array as a member of the class
#include <iostream>
using namespace std;
class student
{
    int roll;
    int mark[3];
    float avg;
    char name[15];
    public:
    void input()
    {
        cout<<"enter the roll number ";
        cin>>roll;
        for(int i =0;i<3;i++)
        {
            cout<<"enter the mark"<<endl;
            cin>>mark[i];
        }
        cout<<"enter the name of the student ";
        cin>>name;
        return;
    }
    void output();
   
};
 inline void student::output()
    {
        int sum = 0;
         for(int i =0;i<3;i++)
        {
           sum= sum+mark[i]; 
        }
        avg = sum/3.0;
        cout<<"Roll Number = "<<roll<<" Name is "<<name<<" and average mark is "<<avg;
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