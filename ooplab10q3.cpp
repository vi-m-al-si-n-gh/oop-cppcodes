//Write a program in cpp to find the number of characters present in the file, number of words and 
// number of sentences in the file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string name;
    int charCount = 0, wordCount = 0, sentenceCount = 0;
    ifstream file;
    file.open("filename.txt");
    while (getline(file, name))
        {
            for (int i = 0; i < name.length(); i++)
            {
                if (name[i] != ' ')
                {
                    charCount++;
                }
                if (name[i] == ' ')
                {
                    wordCount++;
                }
                if (name[i] == '.' || name[i] == '!' || name[i] == '?')
                {
                    sentenceCount++;
                }
            }
        }
    
    cout << "The number of characters in the file is: " << charCount << endl;
    cout << "The number of words in the file is: " << wordCount << endl;
    cout << "The number of sentences in the file is: " << sentenceCount << endl;
    file.close();
    return 0;
}