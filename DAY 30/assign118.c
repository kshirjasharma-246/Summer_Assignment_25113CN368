#include <stdio.h>
#include <string.h>
int main()
{
 int ids[100];
 char titles[50][50];
 char authors[100][50];
 int count=0, choice;

 while(1)
  {
    printf("\n Mini Library Menu \n");
    printf("1.Add Book \n");
    printf("2.Display Books \n");
    printf("3.Search Book by ID \n");
    printf("4.Exit \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice==1)
     {
      if(count>=100) 
      {
        printf("Library is full.Cannot add more books.\n");
      }
     else
      {
        printf("Enter Book ID: ");
        scanf("%d", &ids[count]);
        printf("Enter Book Title: ");
        scanf(" %[^\n]", titles[count]);
        printf("Enter Author Name: ");
        scanf(" %[^\n]", authors[count]);
        count++;
        printf("Book added successfully.\n");
        }
     }
     else if(choice==2)
      {
        if(count==0)
         {
          printf("No books in the library.\n");
         } 
        else
         {
          printf("\n List of Books:\n");
          for(int i=0; i<count; i++)
           {
             printf("\n Book ID: %d \n", ids[i]);
             printf("Title : %s \n", titles[i]);
             printf("Author : %s \n", authors[i]);
            }
         }
      }
     else if(choice==3) 
     {
      int searchId, found = 0;
      printf("Enter Book ID to search: ");
      scanf("%d", &searchId);
      for(int i=0; i<count; i++) 
      {
        if(ids[i]==searchId)
         {
          printf("\n Book Found:\n");
          printf("Title  : %s \n", titles[i]);
          printf("Author : %s \n", authors[i]);
          found=1;
          break;
         }
     }
     if(!found)
      {
        printf("Book with ID %d not found.\n", searchId);
      }
     }
    else if(choice==4)
    {
      printf("Exiting...\n");
      break;
     }
    else
    {
     printf("Invalid choice. Try again.\n");
    }
  }
    return 0;
}
