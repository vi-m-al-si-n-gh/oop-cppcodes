// wap to create a class student having the details of the student like name,roll number,age 
// use the concept of array of object 
/*#include <iostream>
using namespace std;
class student
{
    int roll;
    float avg;
    float maxavg=0;
    int age;
    int mark[4];
    char name[15];
    public:
     void input()
    {
        cout<<"enter the roll number:";
        cin>>roll;
        cout<<"enter age:";
        cin>>age;
        for(int i =0;i<4;i++)
        {
            cout<<"enter the mark:"<<endl;
            cin>>mark[i];
        }
        cout<<"enter the name of the student:";
        cin>>name;
        return;
    }
    void output()
    {
        float sum = 0.0;
         for(int i =0;i<4;i++)
        {
           sum= sum+mark[i]; 
        }
        avg = sum/4.0;
        cout<<"Roll Number: "<<roll<<" Age: "<<age<<" Name is: "<<name<<" and average mark: "<<avg<<endl;
    }
};
int main()
{
    student s[30]; 
    int n, i;
    cout << "Enter Number of Students - ";
    cin >> n;
    for(i = 0; i < n; i++) 
    s[i].input();
    cout << "Students Data -"<<endl;
    for(i = 0; i < n; i++) 
    s[i].output();
    return 0;
}*/

using namespace std;
#include <iostream>
#include <string>
class Marks;
class Student{
    string name;
    int roll_no;
    friend void printUsingCommonFriend(Student student, Marks marks);
    public:
    Student(string name, int roll_no){
        this->name = name;
        this->roll_no = roll_no;
    }
    void printUsingMember(){
        cout<<"\n\nName: "<<this->name<<endl;
        cout<<"Roll number: "<<this->roll_no<<endl;
    }
    void printUsingMemberFriend(Marks marks);
};
class Marks{
    int s1, s2, s3;
    float avg;
    friend void printUsingCommonFriend(Student student, Marks marks);
    friend class Student;
    public:
    Marks(int s1, int s2, int s3){
        this->s1 = s1;
        this->s2 = s2;
        this->s3 = s3;
        avg = (s1 + s2 + s3) / 3;
    }
    void printUsingMember(){
        cout<<"\nSubject 1: "<<this->s1<<endl;
        cout<<"Subject 2: "<<this->s2<<endl;
        cout<<"Subject 3: "<<this->s3<<endl;
        cout<<"Average marks: "<<this->avg<<endl;
    }
};
void Student::printUsingMemberFriend(Marks marks){
    this->printUsingMember();
    marks.printUsingMember();
}
void printUsingCommonFriend(Student student, Marks marks){
    cout<<"\nName: "<<student.name<<endl;
    cout<<"Roll number: "<<student.roll_no<<endl;
    cout<<"Subject 1: "<<marks.s1<<endl;
    cout<<"Subject 2: "<<marks.s2<<endl;
    cout<<"Subject 3: "<<marks.s3<<endl;
    cout<<"Average marks: "<<marks.avg<<endl;
}
int main(){
    Student student1("Lucas", 1), student2("Owen", 2);
    Marks marks1(50, 60, 70), marks2(80, 90, 94);


    cout<<"Using a common friend function\n";
    printUsingCommonFriend(student1, marks1);
    printUsingCommonFriend(student2, marks2);


    cout<<"\n\nUsing member functions\n";
    student1.printUsingMember();
    marks1.printUsingMember();
    student2.printUsingMember();
    marks2.printUsingMember();


    cout<<"\n\nUsing a member function of student class as friendly to marks class\n";
    student1.printUsingMemberFriend(marks1);
    student2.printUsingMemberFriend(marks2);


    return 0;
}