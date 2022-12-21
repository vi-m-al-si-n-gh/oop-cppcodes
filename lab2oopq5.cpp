//Write a program in C++ to create overloaded function interest to compute simple interest
//and compound interest.
#include <iostream>
#include <math.h>
using namespace std;
void interest(float p,float t, float r){
    float ans=(p*t*r)/100;
    cout<<"Simple interest is "<<ans<<endl;
}
void interest(float p,float t,float r,char ch){
    float ans,temp;
    temp=(1+r/100);
    ans=p*pow(temp,t)-p;
    cout<<"Compound interest is "<<ans<<endl;
    
}
int main(){
    float p,t,r;
    cout<<"Enter the principal amount"<<endl;
    cin>>p;
    cout<<"Enter the time in years "<<endl;
    cin>>t;
    cout<<"Enter the rate of interest "<<endl;
    cin>>r;
    interest(p,t,r);
    interest(p,t,r,'c');
    return 0;
}