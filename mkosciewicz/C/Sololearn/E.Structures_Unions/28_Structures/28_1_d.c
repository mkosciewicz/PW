#include <stdio.h>

struct student {
    int age;
    int grade;
    char name[40];
};

int main() {
    struct student s1; // declaring
    
    // type cast needed
    s1= (struct student){19, 9, "John Birghimer"};
    
    printf("Student: %s, %d\n", s1.name, s1.age);
    
    return 0;
}