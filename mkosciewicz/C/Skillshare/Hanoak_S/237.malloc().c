#include <stdio.h>
//malloc() : Used to allocate single block of memo at run-time -> HEAP

// SYTNAX : pointer = (date_type *) malloc(byte_size);

int main ()
{
    int *ptr;

    ptr = malloc(4); //(int *) ; malloc is casting an integer to the allocated memory
    return 0;
}