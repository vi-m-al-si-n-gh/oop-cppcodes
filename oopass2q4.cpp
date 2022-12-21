#include <iostream>
using namespace std;
class student
{
    int roll;
    char name[20];
    char section[3];
    public:
    void input(){
        cout<<"enter name:";
        cin>>name;
        cout<<"enter section name:";
        cin>>section;
        cout<<"enter roll number:";
        cin>>roll;
    }
    void output(){
        cout<<"enter name:"<<name<<endl;
        cout<<"enter section name:"<<section<<endl;
        cout<<"enter roll number:"<<roll<<endl;
    }
};
class marks:public student{
    int mark[3];
    int sum=0;
    int avg;
    public:
    void get(){
        input();
        for(int i=0;i<3;i++){
            cout<<"enter marks of subject"<<i+1<<":";
            cin>>mark[i];
            sum=sum+mark[i];
        }
        avg=sum/3.0;
    }
    void show(){
        output();
        for(int i=0;i<3;i++){
            cout<<"enter marks of subject"<<i+1<<":"<<mark[i]<<endl;
        }
        cout<<"avg of marks is:"<<avg<<endl;
    }
};
int main()
{
    marks m1,m2;
    cout<<"Enter Details of Student 1"<<endl;
    m1.get();
    cout<<"Enter Details of Student 2"<<endl;
    m2.get();
    cout<<"Displaying Details of Student 1"<<endl;
    m1.show();
    cout<<"Displaying Details of Student 2"<<endl;
    m2.show();
    return 0;
}
