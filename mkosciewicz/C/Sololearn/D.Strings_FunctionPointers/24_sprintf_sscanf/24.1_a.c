#include<stdio.h>
int main(void)
{
    char info[100];
    char dept[] = "HR";
    int emp = 75;
    sprintf(info, "The %s dept has %d employees", dept, emp);
    printf("%s\n", info);

    return 0;
}