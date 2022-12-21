// write a program to create a class student having the name , roll no., section name as its member.
// Create another class marks which stores 3 subject marks and average mark of a student and is 
// derived from student class. Input the details of two students and display all the details.
#include<iostream>
using namespace std;

class student{
    public:
    int roll;
    char name[50];
    char s_name[50];
    student(){}
    void get(){
        cout<<"enter name         : ";
        cin>>name;
        cout<<"enter roll         : ";
        cin>>roll;
        cout<<"enter section name : ";
        cin>>s_name;
    }
    void display();
};
class marks : public student
{
    public:
    int mark[3];
    marks(){}
    void input(){
        for(int i=0;i<3;i++){
            cout<<"enter marks of subject "<<i+1<<":";
            cin>>mark[i];
        }
    }
    void displaym();
};
void student::display(){
    cout<<"entered name         : "<<name<<endl;
    cout<<"entered roll         : "<<roll<<endl;
    cout<<"entered section name : "<<s_name<<endl;
}
void marks::displaym(){
    for(int i=0;i<3;i++){
        cout<<"enter marks of subject "<<i+1<<":"<<mark[i]<<endl;
    }
}
int main(){
    marks m;
    m.get();
    m.input();
    cout<<"*Entered details are shown below*"<<endl;
    m.display();
    m.displaym();
}