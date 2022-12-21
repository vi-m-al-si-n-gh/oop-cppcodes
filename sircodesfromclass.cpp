/*passing object as argument 
#include <iostream>
using namespace std;
class student
{
    int roll;
    float avg;
    public:
    void get()
    {
        cout<<"Enter the roll and average mark ";
        cin>>roll>>avg;
    }
    void show(student k)
    {
        cout<<"Roll = "<<k.roll<<" Average mark = "<<avg<<endl;
    }
    
};
int main()
{
     student s1,s2,s3;
     s1.get();
     s2.get();
     s3.get();
     s1.show(s2);
     //s2.show(s3);
     //s3.show(s1);

    return 0;
}
// 2
//this pointer concept
#include <iostream>
using namespace std;
class student
{
    int roll;
    float avg;
    public:
    void get()
    {
        cout<<"Enter the roll and average mark ";
        cin>>this->roll>>this->avg; //system interpretes as this->
        //*this is an implicit pointer points to address of current object who calls the member function
    }
    void show()
    {
        cout<<"Roll = "<<this->roll<<" Average mark = "<<avg<<endl;
    }
    
};
int main()
{
     student s1,s2,s3;
     s1.get(); //this pointer will have the addresss of s1
     s2.get(); //this pointer will have the addresss of s2
     s3.get(); //this pointer will have the addresss of s3
     s1.show(); //this pointer will have the addresss of s1
     s2.show(); //this pointer will have the addresss of s2
     s3.show(); //this pointer will have the addresss of s3

    return 0;
}
//3
array as a member of the class
#include <iostream>
using namespace std;
class student
{
    int roll;
    int mark[3]; //mark is an array of 3 integgers
    float avg;
    char name[15];
    public:
    void input() //this function is defined inside class and treated as an inline function
    {
        cout<<"enter the roll number ";
        cin>>roll;
        for(int i =0;i<3;i++)
        {
            cout<<"enter the mark"<<endl;//endl is the manipulator..brings cursor to next inline
            cin>>mark[i];
        }
        cout<<"enter the name of the student ";
        cin>>name;
        return;
    }
    void output();//function output is declared only
   
};
inline void student::output() //function output is defined here using scope resolution operator and is a non inline function
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
     student s1,s2; //two instaces(objects) created
     s1.input();
     s1.output();

    return 0;
}
#include<cstring>
#include<iostream>
using namespace std;
class student
{
    char *name;
    public:
    student(char p[])
    {
        int n = strlen(p);
        name = new char[n];
        strcpy(name, p);
    }
    void show()
    {
        cout<<"name is:"<<name<<endl;
    }
};
int main()
{
    char arr[20];
    cout<<"enter name:";
    cin>>arr;
    student s1(arr);
    s1.show();
    cout<<"enter name:";
    cin>>arr;
    student s2(arr);

    return 0;
}




#include <iostream>
using namespace std;
class student
{
    int roll;
    public:
    student(){roll =1;cout<<"zero argument constructor"<<endl; }
    student(int k){roll = 2;cout<<"parameterized  constructor"<<endl; }
    student(student &k){roll= 3;cout<<"copy constructor"<<endl; }
    ~student(){cout<<roll<<" destructor"<<endl; }
    friend void show(student k){cout<<"hello"<<endl;}
};
int main()
{
    student s1;
    student s2(5);
     {
      student s3(s2);
     }
    show(s2);
    return 0;
}



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
 student::~student(){cout<<"destructor"<<endl; }
int main()
{
   
   student *p;
    {
       p =new student;
    delete p;
   }
   p = new student;
   delete p;
         return 0;
}
*/