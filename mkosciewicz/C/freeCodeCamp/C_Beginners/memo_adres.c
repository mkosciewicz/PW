// Access to the memo address of the variables and print on the screen
#include <stdio.h>
#include <stdlib.h>

 int main( ) 
 {
     int age = 30; // The way that i access the value 30 is by referring (ref) to the name of the variable .
     double gpa = 3.4;
     char grade = 'A'; // These values/characters are going to be stored by C inside the physical memo (RAM) on COM
                       //Essentially: C is going to refer to a specific memo adress; that's why i have access to the variable and to the value that it contains
                        //Therefore when C wants to refer to the value '30', he is not actually using age but a specific memo agdress
                        //Thus i can access them using that adress
     printf(" age: %p\n gpa: %p\n grade: %p", &age, &gpa, &grade);//The %p is used here with the purpose to see the memo address, as well the ampersand, which wants to point to this address 
                            //On 64bit architectur the address has such a format 0x7ffd3c1f613c. As i observed it is changing each time that i run the programme
     printf("\n");
     return 0;
}