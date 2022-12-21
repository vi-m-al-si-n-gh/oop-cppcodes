     #include <iostream>
using namespace std;

class employee
{
    char name[20];
    int age;
    int salary;
    
    public:
    
    void getdata()
    {
        cout<<"Enter your name : ";
        cin>>name;
        cout<<"Enter your Age :";
        cin>>age;
        cout<<"Enter salary :";
        cin>>salary;
        
    }
    
    // void operator +(int k)
    // {
    //     salary=salary+k;
    //     cout<<"Salary after Adding incentive :"<<salary<<endl;
        
    // }
    friend void operator +(int k, employee &l)
    {
        l.salary=l.salary+k;
        cout<<"Salary after Adding incentive :"<<l.salary<<endl;
        
    }
};

int main()
{
    employee e;
    
    e.getdata();
    
    int a;
    
    cout<<"Enter the incentive amount :";
    cin>>a;
    operator +(a,e);
    // e.operator +(a);
    return 0;
}