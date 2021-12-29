#include <stdio.h>

union val {
    int int_num;
    float fl_num;
    char str[20]; 
};

int main() {
    union val test;
    test.int_num = 42;
    printf("%d", test.int_num);
    return 0;
}