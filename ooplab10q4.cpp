//Write a program in cpp to take input content from keyboard, store to file and print ith character 
// to jth character 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
    {
        string name;
        int i, j;
        ofstream file;
        cout << "Enter the content: ";
        getline(cin, name);
        file << name;
        file.close();
        
        cout << "Enter the value of i: ";
        cin >> i;
        cout << "Enter the value of j: ";
        cin >> j;
        for (int k = i; k <= j; k++)
        {
            cout << name[k];
        }
        return 0;
    }