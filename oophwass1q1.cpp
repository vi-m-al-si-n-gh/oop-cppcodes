#include<iostream>
#include<math.h>
using namespace std;

class interest;

class basic
{
    float amount;
    public:
    void input()
    {
        cout<<"Enter the loan amount :"<<endl;
        cin>>amount;
        return;
    }
    friend void output1(basic, interest);
    friend void output2(basic, interest);
};

class interest
{
    float year;
    float rate;
    float rp;
    float temp;
    public:
    
    void input()
    {
        cout<<"Enter the year :"<<endl;
        cin>>year;

        cout<<"Enter the rate of intrest :"<<endl;
        cin>>rate;
        rp=(rate*year)/100;

        temp=(1+rate/100);
        return;
    }
    friend void output1(basic, interest);
    friend void output2(basic, interest);
};

void output1(basic a, interest p)
{
    cout<<"Simple Intrest :"<<a.amount*p.rp<<endl;
}
void output2(basic s, interest t)
{
    cout<<"Compound Interest:"<<s.amount*pow(t.temp,t.year)-s.amount<<endl;
}
int main()
{
    basic s;
    interest i;
    s.input();
    i.input();
    output1(s, i);
    output2(s, i);

    return 0;
}