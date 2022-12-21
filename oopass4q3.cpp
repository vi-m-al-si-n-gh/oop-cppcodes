// #include <iostream>
// using namespace std;

// int main() {
//   try {
//     int roll,year,count;
//     cout<<"enter year=";
//     cin>>year;
//     cout<<"enter roll no.=";
//     cin>>roll;
//     while (roll != 0) {
//         roll = roll / 10;
//         ++count;
//     }
//     return count;
//     if (roll == year%100) {
//       cout << "roll number is correct";
//     } 
//     if (roll%100 == 0) {
//       cout << "roll number is correct";
//     }
//     if (count > 7) {
//       cout << "roll number is correct";
//     }
//     else {
//       throw (roll);
//     }
//   }
//   catch (int myNum) {
//     cout << "roll number is incorrect\n";
//     cout << "roll is: " << myNum;  
//   }
//   return 0;
// }


#include<iostream>

// using namespace std;

/* start of Enclosing class declaration */
class Enclosing {	
public:
	int x;
	
/* start of Nested class declaration */
class Nested {
    public:
	int y;
	void NestedFun(Enclosing e) {
    std::cout<<"enter number:";
		std::cin>>e.x;
		std::cout<<"number is:"<<e.x;// works fine: nested class can access
					// private members of Enclosing class
	}
}; // declaration Nested class ends here
}; // declaration Enclosing class ends here

int main()
{	
    Enclosing e1;
    Enclosing :: Nested n;
    n.NestedFun(e1);
}