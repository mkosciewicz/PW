//Boolean order of opoerations
//Error version with missing parentheses
#include <iostream>
using namespace std;

int main () {
    cout << (!true || !false && true) << endl; // The << is called "stream operator"
    cout << ((!true)) || ((!false) && true)) endl;

    return 0; 
}