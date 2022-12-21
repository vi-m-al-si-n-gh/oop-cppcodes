#include <iostream>

using namespace std;

class kilometer{
    int km;
    int m;
    public:
    friend istream& operator>>(istream &k, kilometer &l){
        cout<<"enter km:";
        k>>l.km;
        cout<<"enter m:";
        k>>l.m;
        return k;
    }
    friend ostream& operator<<(ostream &k, kilometer &l){
        k<<" kilometer:"<<l.km<<endl;
        k<<" meter:"<<l.m<<endl;
        return k;
    }
    void operator +(kilometer &k){
        km=km+k.km;
        m=m+k.m;
        cout<<"km:"<<km<<endl;
        cout<<"m:"<<m<<endl;
    }
};
int main()
{
    kilometer k1,k2;
    cin>>k1;
    cout<<k1;
    cin>>k2;
    cout<<k2;
    k1.operator +(k2);
    return 0;
}