//Program 2_1
//Program to compute calories using carbs, protein and fat
#include <iostream>
using namespace std;


int main()
{
    int carb_grams;
    int protein_grams;
    int fat_grams;      //Lines 9 - 11.15 are variable declarations; the command "int" implicates a variable -> These variables are handled in the memory, thus do unterstand we check the memoty architecture
    carb_grams = 30;
    protein_grams = 5;
    fat_grams = 15;     // Lines 12-14 Variable Assignments; we give value to the assignments
    int calories;
    calories = 4 * carb_grams + 4 * protein_grams + 9 * fat_grams; // Here are the computations
    cout << "There are " << calories << " calories in the dish" << endl; // That's the output
   
   return 0;
}