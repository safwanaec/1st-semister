#include <stdio.h>
#include <string.h>

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

/* function declaration */
void printBook( struct Books *book );
int main( ) {

   struct Books Book[2];        /* Declare Book1 of type Book */
   //struct Books Book2;        /* Declare Book2 of type Book */

   //char bt[50][50]={"C Programming","Telecom Billing"};
   //char ba[50][50]={"Nuha Ali","Zara Ali"};
   //char bs[50][50]={"C Programming Tutorial","Telecom Billing Tutorial"};

   /* book 1 specification */
   strcpy( Book[0].title, "C Programming");
   strcpy( Book[0].author, "Nuha Ali");
   strcpy( Book[0].subject, "C Programming Tutorial");
   Book[0].book_id = 6495407;

   /* book 2 specification */
   strcpy( Book[1].title, "Telecom Billing");
   strcpy( Book[1].author, "Zara Ali");
   strcpy( Book[1].subject, "Telecom Billing Tutorial");
   Book[1].book_id = 6495700;

   /* print Book1 info by passing address of Book1 */
   printBook( &Book[0] );

   /* print Book2 info by passing address of Book2 */
   printBook( &Book[1] );

   return 0;
}

void printBook( struct Books *book ) {

   printf( "Book title : %s\n", book->title);
   printf( "Book author : %s\n", book->author);
   printf( "Book subject : %s\n", book->subject);
   printf( "Book book_id : %d\n", book->book_id);
   printf( "\n");
}
