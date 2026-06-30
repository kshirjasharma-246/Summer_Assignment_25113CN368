#include <stdio.h>
#include <string.h>
typedef struct //Structure to store student details
{
 int roll_no;
 char name[50];
 float marks;
}
Student;

Student students[100]; //Global array to store students
int studentCount=0; //Current number of students

void addStudent() //Function to add a new student
{
 if(studentCount>=100)
 {
  printf("\n Database is full.Cannot add more students.\n");
  return;
 }

 printf("\n Enter Roll Number: ");
 scanf("%d", &students[studentCount].roll_no);
 printf("Enter Name: ");
 scanf(" %[^\n]", students[studentCount].name); //Read string with spaces
 printf("Enter Marks: ");
 scanf("%f", &students[studentCount].marks);
 studentCount++;
 printf("Student added successfully.\n");
}

void displayStudents() //Function to display all students
{
 if(studentCount==0)
 {
  printf("\nNo student records available.\n");
  return;
 }

 printf("\n Student Records \n");
 for(int i=0; i<studentCount; i++)
  {
    printf("Roll No: %d\n", students[i].roll_no);
    printf("Name   : %s\n", students[i].name);
    printf("Marks  : %.2f\n\n", students[i].marks);
  }
}

void searchStudent() //Function to search for a student by roll number
{
 int roll;
 printf("\n Enter Roll Number to search: ");
 scanf("%d", &roll);
 for(int i=0; i<studentCount; i++)
  {
    if(students[i].roll_no==roll)
    {
      printf("\nStudent Found:\n");
      printf("Roll No: %d\n", students[i].roll_no);
      printf("Name   : %s\n", students[i].name);
      printf("Marks  : %.2f\n", students[i].marks);
      return;
    }
  }
 printf("Student with Roll No %d not found.\n", roll);
 }

void updateStudent() //Function to update student marks
{
 int roll;
 printf("\n Enter Roll Number to update: ");
 scanf("%d", &roll);
 for(int i=0; i<studentCount; i++) 
 {
  if(students[i].roll_no==roll)
   {
     printf("Enter new Marks: ");
     scanf("%f", &students[i].marks);
     printf("Marks updated successfully!\n");
     return;
    }
  }
 printf("Student with Roll No %d not found.\n", roll);
 }

void deleteStudent() //Function to delete a student by roll number
{
 int roll;
 printf("\n Enter Roll Number to delete: ");
 scanf("%d", &roll);
 for(int i=0; i<studentCount; i++)
 {
  if(students[i].roll_no==roll)
   {
    for(int j=i; j<studentCount-1; j++) //Shift all students after this index to the left
    {
      students[j]=students[j+1];
     }
     studentCount--;
    printf("Student deleted successfully \n");
    return;
    }
 }
 printf("Student with Roll No %d not found.\n", roll);
}

int main()
{
 int choice;
 do
 {
    printf("\n Student Record System \n");
    printf("1.Add Student \n");
    printf("2.Display All Students \n");
    printf("3.Search Student by Roll Number \n");
    printf("4.Update Student Marks \n");
    printf("5.Delete Student \n");
    printf("6.Exit \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
     case 1: 
      addStudent();
      break;
     case 2: 
      displayStudents();
      break;
     case 3:
      searchStudent();
      break;
     case 4: 
      updateStudent();
      break;
     case 5:
      deleteStudent();
      break;
     case 6:
      printf("Exiting program...\n");
      break;
     default:
      printf("Invalid choice.Please try again.\n");
    }
    }
    while(choice!=6);
return 0;
}