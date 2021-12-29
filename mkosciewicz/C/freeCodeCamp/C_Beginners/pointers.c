#include <stdio.h>
#include <stdlib.h>

//As i've seen there are different types of data like integers, doubles (the decimal form of a number) and characters
//A pointer is just a type of data that we can use inside of our programs; it's a memo address which refers to a physical address inside of the memo of our COM when we are storing a value.
// Pointers tends to confuse people, but they are datatypes with which i work and it's a memo address inside the RAM
int main()
{
    //The three lines below contains some of the known until now datatypes. Inside the variables i can store whichever value, as below.
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';
    //Below i add one more datatype; the pointer; we can store the pointers inside a pointer variable, because we need a physical memo address
    // Pro memo: When i store a pointer variable it's a memo address and i don't necessarily know any memo address.
    // Creating a pointer variable it's the storage of memo address for an another variable inside of our program.
    // I do create one as below: int * (give a name for this pointer) pAge
    // N.B.: The pointer type has to be adequate to the datetype that it is refering. Therefore for the 3 lines above i get:
    int *pAge = &age;
    double *pGpa = &gpa;
    char *pGrade = &grade;
    printf("age's memo address: %p\n", &age);
    printf("gpa's memo address: %p\n", &gpa);
    printf("grade's memo address: %p\n", &grade);
    return 0;
}