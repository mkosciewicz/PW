#include <stdio.h>
#include <stdlib.h>

 int main( ) 
 {
     int C[3][2][2] =
         {
             {{2, 5}, {7, 9}},
             {{3, 4}, {6, 1}},
             {{0, 8}, {11, 13}}};
     printf("%p %p %p %p", C, *C, C[0], &C[0][0]);
     return 0;
 }