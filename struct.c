#include <stdio.h>
#include <string.h>
 
struct Books {
   char  title[50];
   char  author[50];
   int   book_id;
   float grade;
};
 
int main( ) {

   struct Books Book1 = {"Hello ","Ali ",12045,9.8} ;
   
   printf( "Book 1 title :   %s\n",  Book1.title);
   printf( "Book 1 author : %s\n", Book1.author);

   printf( "Book 1 book_id : %i\n", Book1.book_id);
   printf("Book 1 Grade : %.2f \n ",Book1.grade);

   

   return 0;
}

    
