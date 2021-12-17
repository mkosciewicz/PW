#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a;
    int b;
    int c; 
    c = scanf("%d, %d", &a, &b);
    c = a + b;
    printf("\nPodaj liczbę: %d", a);
    printf("\nPodaj liczbę: %d", b);
    printf("\nRówna: %d", c);
    printf("\n");
    return 0;
}