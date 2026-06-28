#include <stdio.h>
#include <string.h>
struct Book  //Structure to store book details
{
  int id;
  char title[50];
  char author[50];
};

struct Book library[100]; //Global array to store books
int bookCount=0; //Number of books in the library

void addBook() //Function to add a new book
 {
   if(bookCount>=100) 
   {
     printf("\n Library is full.Cannot add more books.\n");
     return;
    }

  printf("\n Enter Book ID: ");
  scanf("%d", &library[bookCount].id);
  
  printf("Enter Book Title: ");
  fgets(library[bookCount].title, sizeof(library[bookCount].title), stdin);
    
  printf("Enter Author Name: ");
  fgets(library[bookCount].author, sizeof(library[bookCount].author), stdin);
  bookCount++;
  printf("\n required book is added \n");
 } 

 void displayBooks() //Function to display all books
 {
  if(bookCount==0)
   {
     printf("\nNo books in the library.\n");
      return;
    }

  printf("\n--Library Books--\n");
  for(int i=0; i<bookCount; i++)
   {
     printf("ID: %d ||| Title: %s ||| Author: %s\n", library[i].id, library[i].title, library[i].author);
    }
}

void searchBook() //Function to search for a book by ID
{
 int searchId;
 printf("\nEnter Book ID to search: ");
 scanf("%d", &searchId);
 
 for (int i=0; i<bookCount; i++) 
 {
  if(library[i].id==searchId)
   {
     printf("\nBook Found!\n");
     printf("ID: %d\nTitle: %s\nAuthor: %s\n", library[i].id, library[i].title, library[i].author);
     return;
   }
 }
 printf("\nBook not found.\n");
}

 int main() //Main function
 {
  int choice;
  while(1)
   {
     printf("\n===Library Management System===\n");
     printf("1.Add book \n");
     printf("2.Display all books \n");
     printf("3.Search book by ID \n");
     printf("4. Exit\n");
     printf("Enter your choice: ");
     scanf("%d", &choice);

     switch(choice)
      {
         case 1:
          addBook();
          break;
         case 2:
          displayBooks();
          break;
         case 3:
          searchBook();
          break;
         case 4:
          printf("\n Exiting program \n");
          return 0;
         default:
          printf("\n Invalid choice! Please try again.\n");
      }
    }
}