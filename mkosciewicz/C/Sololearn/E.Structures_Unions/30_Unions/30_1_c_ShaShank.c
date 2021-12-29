//thanks for the cool example
#include <stdio.h>

union val {
  int int_num;
  float fl_num;
  char str[20]; 
};
int main() {  
  union val test;

  test.int_num = 123;
  
    printf("%d\n\n", test.int_num);
  test.fl_num = 98.76;
   printf("%d\n", test.int_num);
// here is the small addition, you can observe that the integer
 //data member has been changed to the last member i.e. float, 
//I am not good at conversions, but you can refer to the below 
//comments, provided by @Nicolas Kaiser
  printf("%f\n", test.fl_num);
  
  strcpy(test.str, "hello");
printf("%s\n\n", test.str);
  printf("%d\n", test.int_num);
  printf("%f\n", test.fl_num);
  printf("%s\n", test.str);
  return 0;
}

// this is the same code as previous with a small modification, you will understand it better
/* output would be
123

1120240927
98.760002
hello

1819043176
1143141483620823900000000000.000000
hello*/