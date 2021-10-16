#include <stdio.h>
#include <string.h>
 
union Data {
   int i;
   float f;
   char str[20];
};
 
int main( ) {

   union Data data; 

   // Corrupted Output Accessing Multiple members at a time       

   printf( "Memory size : %d\n", sizeof(data));
   data.i = 10;
   data.f = 45.5;
   strcpy( data.str, "C Programming");

   printf( "data.i : %d\n", data.i);
   printf( "data.f : %.4f\n", data.f);
   printf( "data.str : %s\n", data.str);

   // Correct Output Accessing one member at a time

   data.i = 10;
   printf( "data.i : %d\n", data.i);
   
   data.f = 220.5;
   printf( "data.f : %f\n", data.f);
   
   strcpy( data.str, "C Programming");
   printf( "data.str : %s\n", data.str);
   


   return 0;
}