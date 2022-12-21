/*2.WAP to create a class student having name, age, roll number and average mark as its member.
Input the details from keyboard and display the details to monitor by overloading the extraction and 
insertion operator.*/
#include <iostream>
using namespace std;

class student{
    string name;
    int age;
    int roll;
    float avg;
    public:
    friend istream& operator>>(istream &k, student &l){
        cout<<"Enter Name: ";
        k>>l.name;
        cout<<"Enter Age: ";
        k>>l.age;
        cout<<"Enter Roll No: ";
        k>>l.roll;
        cout<<"Enter Average marks: ";
        k>>l.avg;
        return k;
    }
    friend ostream& operator<<(ostream &k, student &l){
        k<<"Name is "<<l.name<<endl;
        k<<"Age is "<<l.age<<endl;
        k<<"Roll No is "<<l.roll<<endl;
        k<<"Average Mark is "<<l.avg<<endl;
        return k;
    }
};
int main()
{
    student s1;
    cin>>s1;
    cout<<s1;
    return 0;
}

// /*3.WAP to overload the assignment operator to assign the properties of one object to another.
// Also, add the constructors and destructors to verify the respective invocation.*/
// #include <iostream>
// using namespace std;
// class abc{
//     int a;
//     float b;
//     public:
//     abc(){
//         cout<<"Zero Arg constructor"<<endl;
//         cout<<"Enter A value: ";
//         cin>>a;
//         cout<<"Enter B value: ";
//         cin>>b;
//     }
//     abc(int x, float y){
//         cout<<"Parameterized constructor"<<endl;
//         a = x;
//         b = y;
//     }
//     abc(abc &k){
//         cout<<"Copy constructor"<<endl;
//         a = k.a;
//         b = k.b;
//     }
//     void operator=(abc &k){
//         cout<<"Assignment Operator"<<endl;
//         a = k.a;
//         b = k.b;
//     }
//     void show(){
//         cout<<"A value "<<a<<endl;
//         cout<<"B value "<<b<<endl;
//     }
//     ~abc(){
//         cout<<"Destructor"<<endl;
//     }
// };
// int main()
// {
//     abc a1, a2;
//     a2=a1;
//     a2.show();
//     abc a3(a2), a4(5, 2.5);
//     a3.show();
//     a4.show();
// 	return 0;
// }