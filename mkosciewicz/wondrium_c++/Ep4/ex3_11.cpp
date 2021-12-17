//  Illustrating an if-else statement
#include <iostream>
using namespace std;
 
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
   if ((age < 18) || (age >= 65)) { /*The best is to use thede curly braces, no matter how many lines are following*/
    cout << "You're OK" << endl;   
   }
   else {
       cout << "Sorry" << endl;
       cout << "welcome" << endl;
   }
    return 0;
}