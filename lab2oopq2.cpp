//use of static data member and member function
#include <iostream>
using namespace std;
class football
{
    int jersey_number;
    float shoe_number;
    char name[20];
    static int i;
    public:
    void get()
    {
        cout<<"enter name,jersey number & shoe number:";
        cin>>name>>jersey_number>>shoe_number;
    }
    void show()
    {
        cout<<"player name:"<<name<<"  jersey number = "<<jersey_number<<"  shoe number = "<<shoe_number<<endl;
    }
    static void display()
    {
        ++i;
        cout<<"i = "<<i<<endl;
    }
};
int football::i;

int main()
{
   football f1,f2;  
   f1.get();
   f2.get();
   f1.show();
   f2.show();
   football::display();

    return 0;
}