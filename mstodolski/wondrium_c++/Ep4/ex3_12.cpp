// Multiple operations within if and else clauses
#include <iostream>
using namespace std;
 
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    float price;
   if ((age < 18) || (age >= 65)) { /*The best is to use thede curly braces, no matter how many lines are following*/
    cout << "You're OK" << endl;   
    price = 5.0;
   }
   else {
       cout << "Sorry" << endl;
       cout << "welcome" << endl;
       price = 7.5;
   }
   cout << "Your price is: " << price << endl;
    return 0;
}