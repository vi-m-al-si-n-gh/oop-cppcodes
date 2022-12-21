/*wap to create class library that stores the details of a book like name  of the book, name of the author and
 number of pages, derive a class publisher that stores the name of the publisher and year of publication by 
 using nessary function input and dispaly the details by justifying run time binding. deallocate all the respective
 memories after the details are displayed*/
#include <iostream>
using namespace std;
class book
{
    public:
    string nameb,namea;
    int page;
    void details()
    {
        cout<<"Enter name of book and name of author and number of pages"<<endl;
        cin>>nameb>>namea>>page;
    }
    virtual void display()
    {
        cout<<"Book name: "<<nameb<<"Author name: "<<namea<<"Pages: "<<page;

    }
    ~book()
    {
        cout<<"Object of class book destroyed"<<endl;
    }
};
class publisher:public book
{
    public:
    string namep;
    int yearp;
    void details()
    {
        cout<<"Enter name of publisher and year of publishing";
        cin>>namep>>yearp;
    }
    void display()
    {
        cout<<"Book name: "<<nameb<<"Author name: "<<namea<<"Pages: "<<page<<"Publisher name: "<<namep<<"Year of publishing: "<<yearp;
    }
    ~publisher()
    {
        cout<<"Object of class publisher destroyed"<<endl;
    }
};
int main()
{
    book *b;
    publisher c;
    b=&c;
    b->details();
    c.details();
    b->display();
    return 0;
}