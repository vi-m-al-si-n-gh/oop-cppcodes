// considering  question 1 details, students and marks are two independent classes. Derive a class 
// "grade" from "student" and "marks" which is having grade as its member. IF avgmark>90 (grade O) 
// .....avg mark<90 and avg mark > 80 ( grade B) else assign grade as C. Input the details and 
// display all the details of a student.
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
    int sum=0;
    void input(){
        for(int i=0;i<3;i++){
            cout<<"enter marks of subject "<<i+1<<":";
            cin>>mark[i];
            sum=sum+mark[i];
        }
    }
    int avg = sum/3;
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
        cout<<"average marks is:"<<avg;
    }
}
class grades: public student,public marks{
    public:
    char grade[2];
    grades(){}
    void displayg();
};

int main(){
    marks m;
    grades g;
    m.get();
    m.input();
    cout<<"*Entered details are shown below*"<<endl;
    m.display();
    m.displaym();
    if(m.avg>90){
        g.grade='O';
    }
    else if(m.avg<90 && m.avg>80){
        g.grade='A';
    }
    else{
        g.grade='B';
    }
}