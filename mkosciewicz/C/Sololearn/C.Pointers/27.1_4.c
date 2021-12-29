#include <stdio.h>
#include <stdlib.h>

 int main( ) 
 {
     float num = 3.14;
     void *ptr = &num;
     float a;
     a = *((float *)ptr) *= 3;
     printf("\n%lf\n",a);

     return 0;
}