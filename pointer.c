#include <stdio.h>

int main () {

   int  num = 10;  
   int  *a;   

   a = &num;  

   printf("Address of num variable: %x\n", &num  );

   printf("Address stored in a variable: %x\n", a);

   printf("Value of *a variable: %d\n", *a );

   return 0;
}
