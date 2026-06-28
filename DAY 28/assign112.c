#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTACTS 100   // Maximum number of contacts
#define NAME_LEN 50
#define PHONE_LEN 15

// Structure to store contact details
typedef struct {
    char name[NAME_LEN];
    char phone[PHONE_LEN];
} Contact;

Contact contacts[MAX_CONTACTS]; // Array to store contacts
int contactCount = 0;           // Number of contacts stored

// Function prototypes
void addContact();
void viewContacts();
void searchContact();
void deleteContact();

int main() {
    int choice;

    while (1) {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. View All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        switch (choice) {
            case 1: addContact(); break;
            case 2: viewContacts(); break;
            case 3: searchContact(); break;
            case 4: deleteContact(); break;
            case 5: printf("Exiting program. Goodbye!\n"); exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

// Function to add a new contact
void addContact() {
    if (contactCount >= MAX_CONTACTS) {
        printf("Contact list is full!\n");
        return;
    }

    getchar(); // Clear newline from buffer
    printf("Enter name: ");
    fgets(contacts[contactCount].name, NAME_LEN, stdin);
    contacts[contactCount].name[strcspn(contacts[contactCount].name, "\n")] = '\0';

    printf("Enter phone number: ");
    fgets(contacts[contactCount].phone, PHONE_LEN, stdin);
    contacts[contactCount].phone[strcspn(contacts[contactCount].phone, "\n")] = '\0';

    contactCount++;
    printf("Contact added successfully!\n");
}

// Function to view all contacts
void viewContacts() {
    if (contactCount == 0) {
        printf("No contacts found.\n");
        return;
    }

    printf("\n--- Contact List ---\n");
    for (int i = 0; i < contactCount; i++) {
        printf("%d. Name: %s | Phone: %s\n", i + 1, contacts[i].name, contacts[i].phone);
    }
}

// Function to search for a contact by name
void searchContact() {
    if (contactCount == 0) {
        printf("No contacts found.\n");
        return;
    }

    char searchName[NAME_LEN];
    getchar();
    printf("Enter name to search: ");
    fgets(searchName, NAME_LEN, stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < contactCount; i++) {
        if (strcasecmp(contacts[i].name, searchName) == 0) {
            printf("Contact found: Name: %s | Phone: %s\n", contacts[i].name, contacts[i].phone);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Contact not found.\n");
    }
}

// Function to delete a contact by name
void deleteContact() {
    if (contactCount == 0) {
        printf("No contacts found.\n");
        return;
    }

    char deleteName[NAME_LEN];
    getchar();
    printf("Enter name to delete: ");
    fgets(deleteName, NAME_LEN, stdin);
    deleteName[strcspn(deleteName, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < contactCount; i++) {
        if (strcasecmp(contacts[i].name, deleteName) == 0) {
            // Shift remaining contacts left
            for (int j = i; j < contactCount - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            contactCount--;
            found = 1;
            printf("Contact deleted successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("Contact not found.\n");
    }
}