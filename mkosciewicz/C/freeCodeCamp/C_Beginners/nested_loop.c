#include <stdio.h>
#include <stdlib.h>

 int main( ) 
 {
     int nums[3][2] = { //The numbers in these square brackets are the quantity of raises and columns in the 2D array (?matrix?)
                      {1, 2},
                      {3, 4},
                      {5, 6},
                       };
     int i, j; //The nested loop is going to serve, thus we may print all the elements of the 2D arr
     for (i = 0; i < 3; i++) { //Num 3 is choosen, because that's how much nums of raises we have choosen; that's our 'i'
            for (j = 0; j < 2; j++){ //2 here is: "How many elements are inside of each one of these raise"
                printf("%d", nums[i][j]);
            }
            printf("\n");
     }
    return 0;
}