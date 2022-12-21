#include<iostream>
using namespace std;

class test{
    float marks;
    public:
    test(){}
    test(float k){
        marks=k;
    }
    void display(){
        cout<<"Marks:"<<marks;
    }
    // void operator -()
    // {
    //     cout<<"op"<<endl;
    //     marks = -marks;
    // }
    friend void operator -(test &l){
        l.marks = -l.marks;
    }
};
int main(){
    test t(90.5f);
    t.display();
    -t;
    t.display();
    return 0;
}