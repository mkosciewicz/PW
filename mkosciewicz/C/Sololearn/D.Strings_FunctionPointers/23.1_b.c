 #include <stdio.h>

 int main ()
 {
     char city[40];
     printf("ure_city: ");
     fgets(city, 40, stdin);
     puts(city);
     return 0;
 }