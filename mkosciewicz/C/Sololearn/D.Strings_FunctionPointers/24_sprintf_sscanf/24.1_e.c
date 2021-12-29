#include<stdio.h>
int main ()
{
    char input[10];
    int num;

    printf("Entrer a number: ");
    fgets(input, 10, stdin);
    num = atoi(input);

    return 0;
}