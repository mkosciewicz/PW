#include <stdio.h>
#include <stdlib.h>
void print(char* C)
{
    int i = 0;
    while(*C != '\0');
    {
        printf("%c", C[i]);
        C++;
    }
    printf("\n");
}
int main()
{
    char C[20] = "Hello";
    print(C);
}