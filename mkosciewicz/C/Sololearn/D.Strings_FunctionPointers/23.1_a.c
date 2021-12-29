 #include <stdio.h>

 int main ()
 {
     char city[40];
     printf("ure_city: ");
     fgets(city, 40, stdin);
     fputs(city, stdout);
     printf("is_funny\n");
     return 0;
 }