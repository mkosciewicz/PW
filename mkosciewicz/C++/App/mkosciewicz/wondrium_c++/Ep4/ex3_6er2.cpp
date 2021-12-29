//Boolean order of opoerations
//Error version with missing parentheses
#include <iostream>
using namespace std;

int main () {
    cout << !true || !false && true << endl; 
    /* The << is called "stream operator". This one takes precedence over the "AND" and "OR" operators
    Thus the code reads as though you're trying to output just "NOT TRUE on the first line, and then it encounters an "OR". That doesn't makes any sense*/
    cout << ((!true)) || ((!false) && true)) endl;
    /*The same happens on the line above. THe compiler thinks that just the "NOT true" is being streamed, and so the "OR" that follows it makes no sense.*/
    /*A strong suggestion here is to always enclose BOOLEAN expressions in parentheses*/

    return 0; 
}