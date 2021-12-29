#include<stdio.h>
#include<string.h>
char s1[] = "The grey fox";
char s2[] = " jumped.";

int main ()
    {
        strcpy(s1, s2);
        printf("s1 is now %s \n", s1);
        return 0;
    }
