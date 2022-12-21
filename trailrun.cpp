#include <iostream>

using namespace std;
class student{
    public:
    int roll;
    int stuno;
    public:
    void get(){
        cout<<"enter roll:";
        cin>>roll;
        cout<<"section number:";
        cin>>stuno;
    }
};
class marks:public student{
    int mark;
    public:
    void get1(){
        get();
        for(int i=0;i<stuno;i++){
           cout<<"enter mark";
           cin>>mark; 
        }
    }
};

int main()
{
    marks m;
    m.get1();
    cout<<"Hello World";

    return 0;
}