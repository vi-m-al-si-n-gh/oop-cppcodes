#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
    {
        char c[20];
        int i, j;
        ofstream fout;
        cout << "Enter the content: ";
        cin>>c;
        fout << c;
        fout.close();
        ofstream out;
        out.open("file.binary");
        cout << "Enter the value of i: ";
        cin >> i;
        cout << "Enter the value of j: ";
        cin >> j;
        for (int k = j; k >= i; k--)
        {
            cout << c[k];
        }
        for (int k = j; k >= i; k--)
        {
            out<< c[k];
        }
        
        out.close();
        return 0;
    }