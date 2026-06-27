#include <stdio.h>
#include <string.h>

// Function to calculate grade based on percentage
char calculateGrade(float percentage)
{
  if(percentage>=90)
  return 'A';
  else if(percentage>=75) 
  return 'B';
  else if(percentage>=60)
  return 'C';
  else if(percentage>=50)
  return 'D';
  else 
  return 'F';
}

int main()
{
 char name[50], grade;
 int rollNo;
 int subjects;
 float marks[50], total=0, percentage;

 printf("==Student Marksheet Generator==\n");

 printf("Enter Student Name: ");  //Input student details
 fgets(name, sizeof(name), stdin);
    
 printf("Enter Roll Number: ");
 scanf("%d", &rollNo);
 if(rollNo <= 0)
  {
    printf("Invalid Roll Number.\n");
    return 1;
  }

 printf("Enter Number of Subjects (max 50): ");
 scanf("%d", &subjects);
 if(subjects<=0 || subjects>50)
  {
    printf("Invalid number of subjects.\n");
    return 1;
  }

 for(int i=0; i<subjects; i++)  //Input marks for each subject
  {
    printf("Enter marks for Subject %d (0-100): ", i + 1);
    scanf("%f", &marks[i]);
    if(marks[i]<0 || marks[i]>100)
     {
        printf("Invalid marks entered.\n");
        return 1;
     }
    total += marks[i];
  }

 percentage=total/subjects;  //Calculate percentage and grade
 grade = calculateGrade(percentage);

 printf("\n===== MARKSHEET =====\n"); //Display Marksheet
 printf("Name       : %s\n", name);
 printf("Roll No.   : %d\n", rollNo);
 printf("Subjects   : %d\n", subjects);
 for (int i=0; i<subjects; i++) 
 {
    printf("Subject %d : %.2f\n", i + 1, marks[i]);
 }
 printf("Total Marks: %.2f\n", total);
 printf("Percentage : %.2f%%\n", percentage);
 printf("Grade      : %c\n", grade);
 printf("Result     : %s\n", (grade != 'F') ? "PASS" : "FAIL");
 return 0;
}