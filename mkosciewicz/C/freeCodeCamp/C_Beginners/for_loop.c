#include <stdio.h>
#include <stdlib.h>
// int luckyNums [] = {4, 8, 15, 16, 23, 42};
 int main( ) 
 {
    int luckyNums [] = {4, 8, 15, 16, 23, 42};
   
    int i;
    luckyNums [i];
    for (i = 0; i < 6; i++) // The 'i' here plays the role of an index; the initial value must be zero, since it is index of the updefined array
    {
        printf("%d\n", luckyNums[i]);
    }
    return 0;
}