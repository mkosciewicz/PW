// The || (or) operator for logical OR Boolean operations 
#include <iostream>
using namespace std;

int main()
{
    bool chocolate_syrup = true;
    bool chocolate_ice_cream = true;
    bool chocolate_sundae;
    chocolate_sundae = chocolate_syrup || chocolate_ice_cream; // Here the || means logical operator OR
    cout << chocolate_syrup << " OR " << chocolate_ice_cream << " is: " << chocolate_sundae << endl; // The symbol << has to mean that if the're "" symbols, then they are regarding the word before them
    chocolate_ice_cream = true;
    chocolate_syrup = false;
    chocolate_sundae = chocolate_ice_cream || chocolate_syrup;
    cout << chocolate_ice_cream << " OR " << chocolate_syrup << " is: " << chocolate_sundae << endl;
    chocolate_ice_cream = false;
    chocolate_syrup = true;
    chocolate_sundae = chocolate_ice_cream || chocolate_syrup;
    cout << chocolate_ice_cream << " OR " << chocolate_syrup << " is: " << chocolate_sundae << endl;
    chocolate_ice_cream = true;
    chocolate_syrup = false;
    chocolate_sundae = chocolate_ice_cream || chocolate_syrup;
    cout << chocolate_ice_cream << " OR " << chocolate_syrup << " is: " << chocolate_sundae << endl;
    chocolate_ice_cream = false;
    chocolate_syrup = false;
    chocolate_sundae = chocolate_ice_cream || chocolate_syrup;
    cout << chocolate_ice_cream << " OR " << chocolate_syrup << " is: " << chocolate_sundae << endl;
    
    return 0;

}