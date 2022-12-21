//WAP to create a function template to swap 2 numbers.
#include <iostream>
using namespace std;

template <class T>
void swapp(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    swapp(a, b);
    cout << "Numbers after swapping: " << a << " " << b << endl;
    return 0;
}