#include <iostream>
#include <fstream>
using namespace std;
class student{
      char name[20];
      public:
      void storedata(){
        fstream fout;
        fout.open("student.txt", ios::out);
        fout.write((char *)this, sizeof(*this));
        fout.close();
      }
      void getdata(){
        cout<<"Enter name of student:";
        cin>>name;
      }
};

int main() {
  student s;
  s.storedata();
  s.getdata();
}