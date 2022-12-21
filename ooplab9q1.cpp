#include<iostream>
using namespace std;
class dollar;
class rupees{
    float rs;
    public:
    rupees(){}
    rupees(float k){
        rs = 82.86 * k;
    }
    // rupees(dollar);//only dollar we can write but not dollar k as obj of one class cannot be made in other class if not declared


    //usinf casting operator funct

    void show(){
        cout<<"INR : "<<rs<<endl;
    }
    
};

class dollar{
    float dlr;
    public:
    
    void get(){
        cout<<"Enter the amount in dollar: ";
        cin>>dlr;
    }
    operator rupees(){
        // return(82.86 * dlr);
        return rupees(dlr);
    }
    float reply(){
        return dlr;
    }

};
//using constructor
// rupees::rupees(dollar k){
//     rs = 82.86 * k.reply();
// }
int main(){
    dollar d1;
    d1.get();
    // int j = d1.reply();
    // rupees r1(j); for constructor
    rupees r1;
    r1 = d1;
    r1.show();
    return 0;
}