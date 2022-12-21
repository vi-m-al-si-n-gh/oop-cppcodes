#include<iostream>
using namespace std;
class test
{
    int units;
    int price;
    int tprice;
    public:
    void get(){
       cout<<"Enter no of units: ";
        cin>>units;
        cout<<"Enter price: ";
        cin>>price;
    }

    void tot(){
        tprice = units * price;
        cout<<"Total price is:"<<tprice<<endl;
    }
    friend void operator > (test a, test b){
        if(a.tprice>b.tprice){
            cout<<"a is greater";
        }
        else if(a.tprice==b.tprice){
            cout<<"Equal"<<endl;
        }
        else{
            cout<<"b is greater";
        }
    }
};

int main(){
    test t1, t2;
    t1.get();
    t1.tot();
    t2.get();
    t2.tot();
    // t1 > t2;
    operator >(t1,t2);
    return 0;
}