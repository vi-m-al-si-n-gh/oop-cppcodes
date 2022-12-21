#include<iostream>
using namespace std;
class length{
    int feet;
    int inches;
    public:
    int reply(){
        return feet;
    }
    length(){
        int j;
        int count = 0;
        cout<<"Enter total length in inches: ";
        cin>>j;
        for(int i=j;i>=12;i = i-12){
            inches=i-12;
            count++;
        }
        feet = count;
    }
    //part b
    length(int k){
        int ft = 0;
        int inc = 0;
        for(int i = k;i>=12;i = i-12){
            inc = i - 12;
            ft++;
        }
        feet = ft;
        inches = inc;
    };

    //a part
    operator int(){
        int y = reply();
        return y;
    }
    void show(){
        cout<<"FEET : "<<feet<<" INCHES: "<<inches<<endl;
    }
};
int main(){
    length l1;
    l1.show();
    int f1 = l1;
    cout<<"F is assigned "<<f1<<endl;
    //b part
    int f2 = 37;
    length l2 = f2;
    l2.show();
    return 0;
}