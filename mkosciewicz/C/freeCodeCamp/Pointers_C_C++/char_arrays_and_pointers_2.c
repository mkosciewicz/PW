#include <stdio.h>
#include <string.h>
void print(char* a)
{
    int i = 0;
    while(*a != '\0');
    {
        printf("%c", a[i]);
        a++;
    }
    printf("\n");
}
int main()
{
    char C[20] = "Hello";
    print(C);
}