#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_CONTACTS 100
#define NAME_LEN 50
#define PHONE_LEN 15
#define FILE_NAME "contacts.txt"

typedef struct //Structure to store contact details
{
 char name[NAME_LEN];
 char phone[PHONE_LEN];
} Contact;

Contact contacts[MAX_CONTACTS];
int contactCount = 0;

void loadContactsFromFile(); //Function prototypes
void saveContactsToFile();
void addContact();
void displayContacts();
void searchContact();
void deleteContact();

int main() {
    int choice;

 loadContactsFromFile();  //Load contacts from file at program start

 while(1) 
 {
  printf("\n Contact Management System \n");
  printf("1.Add Contact \n");
  printf("2.Display All Contacts\n");
  printf("3.Search Contact \n");
  printf("4.Delete Contact \n");
  printf("5.Exit \n");
  printf("Enter your choice: ");
  scanf("%d", &choice);
 }
 switch(choice)
  {
    case 1: addContact(); break;
    case 2: displayContacts(); break;
    case 3: searchContact(); break;
    case 4: deleteContact(); break;
    case 5: saveContactsToFile();
            printf("Contacts saved. Exiting program.\n");
            exit(0);
    default:
                printf("Invalid choice! Please try again.\n");
   }  
    return 0;
}

void loadContactsFromFile() //Load contacts from file
{
 FILE *file = fopen(FILE_NAME, "r");
 if(!file)
  {
    // File doesn't exist yet, no contacts to load
    return;
  }

  while(fscanf(file, "%49[^,],%14[^\n]\n", contacts[contactCount].name, contacts[contactCount].phone)== 2) {
  contactCount++;
  if(contactCount>=MAX_CONTACTS)
  break;
 }
 fclose(file);
}

void saveContactsToFile() //Save contacts to file
{
  FILE *file=fopen(FILE_NAME, "w");
  if(!file) 
  {
    printf("Error saving contacts to file!\n");
    return;
  }
 for(int i=0; i<contactCount; i++)
  {
    fprintf(file, "%s,%s\n", contacts[i].name, contacts[i].phone);
  }
 fclose(file);
}

void addContact() //Add a new contact
{
  if(contactCount>=MAX_CONTACTS)
   {
     printf("Contact list is full!\n");
     return;
    }

 printf("Enter name: ");
 fgets(contacts[contactCount].name, NAME_LEN, stdin);
 contacts[contactCount].name[strcspn(contacts[contactCount].name, "\n")] = '\0';
 printf("Enter phone number: ");
 fgets(contacts[contactCount].phone, PHONE_LEN, stdin);
 contacts[contactCount].phone[strcspn(contacts[contactCount].phone, "\n")] = '\0';
 contactCount++;
 saveContactsToFile(); // Save immediately after adding
 printf("Contact added successfully!\n");
}

void displayContacts() //Display all contacts
{
  if(contactCount==0)
   {
    printf("No contacts to display.\n");
    return;
   }
 printf("\n Contact List \n");
 for(int i=0; i<contactCount; i++)
  {
    printf("%d. Name: %s | Phone: %s\n", i + 1, contacts[i].name, contacts[i].phone);
  }
}

void searchContact() //Search for a contact by name
{
 char searchName[NAME_LEN];
 int found = 0;
 printf("Enter name to search: ");
 fgets(searchName, NAME_LEN, stdin);
 searchName[strcspn(searchName, "\n")] = '\0';
 for(int i=0; i<contactCount; i++)
  {
    if(strcasecmp(contacts[i].name, searchName)==0)
     {
        printf("Contact found: Name: %s | Phone: %s\n", contacts[i].name, contacts[i].phone);
        found=1;
        break;
     }
   }
  if(!found)
   {
     printf("Contact not found.\n");
    }
}

void deleteContact() //Delete a contact by name
{
 char deleteName[NAME_LEN];
 int found=0;
 printf("Enter name to delete: ");
 fgets(deleteName, NAME_LEN, stdin);
 deleteName[strcspn(deleteName, "\n")] = '\0';
 for(int i=0; i<contactCount; i++)
  {
    if(strcasecmp(contacts[i].name, deleteName)==0)
     {
       for (int j=i; j<contactCount-1; j++)
        {
         contacts[j]=contacts[j+1];
        }
     contactCount--;
     saveContactsToFile(); // Save after deletion
     printf("Contact deleted successfully!\n");
     found=1;
     break;
     }
  }
 if(!found)
 {
  printf("Contact not found.\n");
 }
}