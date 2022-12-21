/*write a program  to create a  class  student having name , roll number and subject mark as its
 member. Initialize the details of two students at the time of creation` where the name and subject 
 marks are decided at the time of creation. Deallocate the memory by creating user defined 
 destructor. */
// #include <iostream>

// using namespace std;

// class student{
//     string name;
//     int roll,*sub,n;
//     public:
//     student(){
//         cout<<"Enter name : ";
//         getline(cin,name);
//         cout<<"Enter roll : ";
//         cin>>roll;
//         cout<<"Enter number of subjects : ";
//         cin>>n;
//         sub=new int[n];
//         for (int i = 0; i < n; i++)
//         {
//             cout<<"Enter marks of subject "<<i+1<<" : ";
//             cin>>sub[i];
//         }
//     }
//     ~student(){
//         cout<<"Memory deallocated sucessfully !!!!"<<endl;
//     }
// };

// int main(){
//     cout<<"*Enter the values of student 1*"<<endl;
//     student* s1=new student;
//     // fflush(stdin);
//     cout<<"*Enter the values of student 2*"<<endl;
//     student* s2=new student;
//     delete s1;
//     delete s2;
//     return 0;
// }

#include <iostream>
using namespace std;
class student
{
    int roll;
    public:
   student(){cout<<"zero argument constructor"<<endl; }
   ~student();
   void show(){cout<<"hello"<<endl;}
    
};
//  student::~student(){cout<<"destructor"<<endl; }
int main()
{
    student *p = new student;
    delete p;
         return 0;
}




#include<iostream>
using namespace std;

class parent
{
    int x;
    public:

    // parameterized constructor
    parent(int i)
    {
        x = i;
        cout << "Parent class Parameterized Constructor\n";
    }
};
class child: public parent
{
    int y;
    public:

    // parameterized constructor
    child(int j) : parent(j)  //Explicitly calling
    {
        y = j;
        cout << "Child class Parameterized Constructor\n";
    }
};
int main()
{
    child c(10);
    return 0;
}