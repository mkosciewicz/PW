#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[10];

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("\nEnter first name: ");
        scanf("%s", s[i].firstName);
        printf("\nEnter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("\nFirst name: ");
        puts(s[i].firstName);
        printf("\nMarks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}


//Input: Tom 98 Tom 98 Tom 98 Tom 98 Tom 98