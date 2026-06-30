#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee //Structure to store employee details
{
 int id;
 char name[50];
 int age;
 float salary;
};

struct Employee employees[100]; //Global array to store employees
int count=0; //Number of employees currently stored

void addEmployee(); //Function prototypes
void viewEmployees();
void searchEmployee();
void deleteEmployee();

int main()
{
 int choice;
 while(1)
  {
    printf("\n Employee Management System \n");
    printf("1.Add Employee \n");
    printf("2.View All Employees \n");
    printf("3.Search Employee by ID \n");
    printf("4.Delete Employee by ID \n");
    printf("5.Exit \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
 switch(choice)
  {
    case 1: 
     addEmployee();
     break;
    case 2:
     viewEmployees();
     break;
    case 3:
     searchEmployee();
     break;
    case 4:
     deleteEmployee();
     break;
    case 5:
     printf("Exit \n");
     exit(0);
    default:
     printf("Invalid choice! Try again.\n");
    }
 }
    return 0;
}

void addEmployee() //Function to add a new employee
 {
  if(count>=100)
   {
     printf("Employee list is full. \n");
     return;
    }

 struct Employee emp;
 printf("Enter Employee ID: ");
 scanf("%d", &emp.id);
 for(int i=0; i<count; i++)   //Check if ID already exists
  {
    if(employees[i].id==emp.id)
     {
       printf("Employee with this ID already exists.\n");
       return;
     }
  }

  printf("Enter Name: ");
  scanf(" %[^\n]", emp.name); // read string with spaces
  printf("Enter Age: ");
  scanf("%d", &emp.age);
  printf("Enter Salary: ");
  scanf("%f", &emp.salary);
  employees[count] = emp;
  count++;
  printf("Employee added successfully!\n");
 }

void viewEmployees() //Function to view all employees
 {
  if(count==0)
   {
    printf("No employees to display.\n");
    return;
   }
  printf("\n %s %s %s %s \n", "ID", "Name", "Age", "Salary");
    for(int i=0; i<count; i++) 
    {
     printf("%d %s %d %.2f\n", employees[i].id, employees[i].name, employees[i].age, employees[i].salary);
    }
}

void searchEmployee() //Function to search employee by ID
 {
  int id, found = 0;
  printf("Enter Employee ID to search: ");
  scanf("%d", &id);
  for(int i=0; i<count; i++)
   {
    if(employees[i].id==id) 
    {
     printf("\n Employee Found:\n");
     printf("ID: %d \n Name: %s\n Age: %d \n Salary: %.2f \n", employees[i].id, employees[i].name, employees[i].age, employees[i].salary);
     found = 1;
     break;
    } 
  }

  if(!found)
   {
     printf("Employee with ID %d not found.\n", id);
    }
 }

void deleteEmployee() //Function to delete employee by ID
{
 int id, found = 0;
 printf("Enter Employee ID to delete: ");
 scanf("%d", &id);
 for(int i=0; i<count; i++) 
 {
  if(employees[i].id==id)
   {
    for (int j=i; j<count-1; j++) //Shift all employees after this index to the left
     {
        employees[j]=employees[j + 1];
     }
     count--;
     found = 1;
     printf("Employee deleted successfully.\n");
     break;
    }
  }
 if(!found)
  {
    printf("Employee with ID %d not found.\n", id);
    }
}