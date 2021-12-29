#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char title[40];
    float hours; 
} course;

void display_course(course class);

int main() {
    course cs2;
    strcpy(cs2.title, "C++ Fundamentals");
    cs2.id = 111;
    cs2.hours = 12.30;
    display_course(cs2);
    return 0;
}

void display_course(course class) {
    printf("%d\t%s\t%3.2f\n", class.id, class.title, class.hours);
} 