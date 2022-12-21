#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class MUN
{
    int cont;
    char event;
    char c_name[20];
    char name[15];
    int score;
    public:
     void input()
    {
        cout<<"enter the name of the participant:";
        cin>>name;
        cout<<"enter contact number of the participant:";
        cin>>cont;
        cout<<"enter event of the participant:";
        cin>>event;
        cout<<"enter the score of the participant out of 100:"<<endl;
        cin>>score;
        cout<<"enter the college name of the participant:";
        cin>>c_name;
        return;
    }
    void output()
    {
        cout<<"name of the participant:"<<name<<endl;
        cout<<"contact number of the participant:"<<cont<<endl;
        cout<<"enter event of the participant:"<<event<<endl;
        cout<<"score of the participant out of 100:"<<score<<endl;
        cout<<"college name of the participant:"<<c_name<<endl;
    }
}m[30];
// void event()
int main()
{ 
    int n, i;
    cout << "Enter Number of participant - ";
    cin >> n;
    for(i = 0; i < n; i++) 
      m[i].input();
    cout << "Participant Data -"<<endl;
    for(i = 0; i < n; i++) 
      m[i].output();
    return 0;
}

