#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream rFile("student.txt");
    char y1;
    ofstream out_file{ "copy.txt" };
    while(!rFile.eof()){
        rFile.get(y1);
        cout<<y1;
        out_file << y1;
    }

    
	cout << "Copy Finished \n";

	rFile.close();
	out_file.close();
}