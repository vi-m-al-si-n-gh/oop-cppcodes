// Write a program to create a class “bank” that is having a member function that calculates simple 
// interest on inputs of principal amount,number of years and rate of interest where 
// rate of interest 
// is default value as 8.5%. However the bank manager can increase the rate of interest
//  by overloading
//  binary plus (+) operator to update the value for a respective customer. The manager must 
// also get 
//  notification if rate of interest is reduced and must manage with proper exception.

#include<iostream>
using namespace std;

class bank{
    int principal;
    double rate;
    int time;
    public:
    void interest(int p,double r= 8.5,int t){
        p=principal;
        r=rate;
        t=time;
        cout<<"si:"<<(p*r*t)/100;
    }
    void operator +(bank &b){
        rate=rate+b.rate;
    }
    void increse(int k){
        rate=k;
        cout<<"enter extra rate:";
        cin>>k;
    }
};
int main(){
    bank b1,b2;
    b1.interest(1000,9.4,2);
    b2.increse(2);
    b1.operator +(b2);
    b1.interest(1000,2);
    try{
        if(rate < 8.5){
            throw 0;
        }
        catch(int k){
            cout<<"wrong";
        }
    }
    return 0;
}
