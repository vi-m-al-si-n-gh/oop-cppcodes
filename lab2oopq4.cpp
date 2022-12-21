// Write a program in C++ to create overloaded function area to compute area of circle,
// rectangle  and square.
#include <iostream>
using namespace std;
void area(float r){
    cout<<"Area of circle is:"<<3.141*r*r<<endl;
}
void area(float a,float b){
    cout<<"Area of rectangle is:"<<a*b<<endl;
}
void area(char c,float i){
    cout<<"Area of square is "<<i*i<<endl;
}
int main(){
    float c_radius,r_length,r_breadth,s_side;
    cout<<"enter radius of circle:"<<endl;
    cin>>c_radius;
    area(c_radius);
    cout<<"enter length & breadth of rectangle:"<<endl;
    cin>>r_length>>r_breadth;
    area(r_length,r_breadth);
    cout<<"enter side of square:"<<endl;
    cin>>s_side;
    area('s',s_side);
    return 0;    
}