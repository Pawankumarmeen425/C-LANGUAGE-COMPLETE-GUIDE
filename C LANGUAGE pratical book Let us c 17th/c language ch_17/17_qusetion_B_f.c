/*Create a structure called library to hold accession number, title of
the book, author name, price of the book, and flag indicating
whether book is issued or not. Write a menu-driven program that
implements the working of a library. The menu options should be:
1. Add book information
2. Display book information
3. List all books of given author
4. List the title of specified book
5. List the count of books in the library
6. List the books in the order of accession number
7. Exit*/
#include <stdio.h>
typedef struct library
{
   char tob[50];
   char aut_name[30];
   int price;
   int acce_no;
   int flag;
} lb;
void add_book_info();
void display_book_info();
void author_books();
void title_book();
void count_book_lib();
void acc_number();
int main()
{
   lb book[50];
   int choice,nob;
   printf("Enter the number of books::\n");
   scanf("%d",&nob);
   for (int i = 0; i < nob; i++)
   {
      printf("Enter the %d book deatils::\n",i+1);
      printf("Title of the book: ");
      gets(book[i].tob);
      printf("Author Name: ");
      gets(book[i].aut_name);
      printf("Book Price: ");
      scanf("%d",&book[i].price);
      printf("Book accession Number: ");
      scanf("%d",&book[i].acce_no);
      printf("Book issued or not(0 for issued and 1 for not issue): ");
      scanf("%d",&book[i].flag);
   }
   
   printf("Enter your choice::::::\n\n");
   printf("1. Add book information\n");
   printf("2. Display book information\n");
   printf("3. List all books of given author\n");
   printf("4. List the title of specified book\n");
   printf("5. List the count of books in the library\n");
   printf("6. List the books in the order of accession number\n");
   printf("7. Exit\n\n");
   scanf("%d", &choice);
   switch (choice)
   {
   case 1:

      break;

   default:
      break;
   }

   return 0;
}