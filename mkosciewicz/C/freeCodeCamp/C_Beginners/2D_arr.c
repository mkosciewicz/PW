#include <stdio.h>
#include <stdlib.h>

 int main( ) 
 {
     int nums[3][2] = { //The numbers in these square brackets are the quantity of verses and columns in the 2D array (?matrix?)
                      {1, 2},
                      {3, 4},
                      {5, 6},
                       };
     printf("\t%d\n", nums[0][1]); //Attention: Since the nums in the brackets are indexes of the array, therefore i condeider the i = 0
     return 0;
}