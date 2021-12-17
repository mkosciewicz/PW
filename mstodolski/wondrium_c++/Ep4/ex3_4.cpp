// The && (and) operator for logical AND Boolean operations 
#include <iostream>
using namespace std;

int main()
{
    bool Early_to_Bed = true;
    bool Early_to_Rise = true;
    bool HWW;
    HWW = Early_to_Bed && Early_to_Rise; // Here the && means logical operator AND
    cout << Early_to_Rise << " AND " << Early_to_Bed << " is: " << HWW << endl; // The symbol << has to mean that if the're "" symbols, then they are regarding the word before them
    Early_to_Bed = true;
    Early_to_Rise = false;
    HWW = Early_to_Bed && Early_to_Rise;
    cout << Early_to_Bed << " AND " << Early_to_Rise << " is: " << HWW << endl;
    Early_to_Bed = false;
    Early_to_Rise = true;
    HWW = Early_to_Bed && Early_to_Rise;
    cout << Early_to_Bed << " AND " << Early_to_Rise << " is: " << HWW << endl;
    Early_to_Bed = true;
    Early_to_Rise = false;
    HWW = Early_to_Bed && Early_to_Rise;
    cout << Early_to_Bed << " AND " << Early_to_Rise << " is: " << HWW << endl;
    Early_to_Bed = false;
    Early_to_Rise = false;
    HWW = Early_to_Bed && Early_to_Rise;
    cout << Early_to_Bed << " AND " << Early_to_Rise << " is: " << HWW << endl;
    
    return 0;

}