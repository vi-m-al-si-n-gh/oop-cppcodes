/*WAP to create a file which stores the first name of the student entered by user from keyboard. 
Input the last name from keyboard and also append to the existing content of the file. Read the full 
name of the student from file and print to output screen. There should be space between first and 
last name.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string fname, lname;
    cout << "Enter first name: ";
    cin >> fname;
    cout << "Enter last name: ";
    cin >> lname;
    ofstream fout;
    fout.open("student.txt", ios::app);
    fout << fname << " " << lname << endl;
    fout.close();
    ifstream fin;
    fin.open("student.txt");
    string line;
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();
    return 0;
}