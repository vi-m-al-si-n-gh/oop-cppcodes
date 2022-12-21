#include<iostream>
using namespace std;

class student{
    char name[20];
    int roll;
    int age;
    public:
    student(){}
    student(int k){
        cout<<"enter student name:";
        cin>>name;
        cout<<"enter roll number:";
        cin>>roll;
        cout<<"enter age:";
        cin>>age;
    }
    ~student(){}
};
class marks:public student{
    float mark[3];
    float sum=0;
    float avg;
    public:
    marks(){}
    marks(int x): student(x){
        for(int i=0;i<3;i++){
            cout<<"enter marks of subject "<<i+1<<":";
            cin>>mark[i];
            sum = sum + mark[i];
        }
        avg= sum/3.0;
    }

};
int main(){
    marks m(3);
}