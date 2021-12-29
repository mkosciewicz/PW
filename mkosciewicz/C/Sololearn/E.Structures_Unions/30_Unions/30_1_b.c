#include <stdio.h>

union val {
    int int_num;
    float fl_num;
    char str[20]; 
};

int main() {
    union val u1;
    union val u2;
    u1.int_num = 42;
    u2 = u1;
    printf("%d\n", u2.int_num);
    printf("%d\n %s\n", u2.int_num, u2.str);

    return 0;
}