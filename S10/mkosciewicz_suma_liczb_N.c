#include <stdio.h>
int main() 
{
    int n, i;
    int sum = 0;

    printf("Wprowadz naturalną liczbę dodatnią: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Suma = %d\n", sum);
    return 0;
}

