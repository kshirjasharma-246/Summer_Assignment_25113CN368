#include <stdio.h>
#include <string.h>
int main()
{
  int l=0;
  struct student
   {
     char name[50];
     int roll;
     int age;
     char course[50];
    };
  printf("enter the number of students:");
  int n;
  scanf("%d",&n);
  struct student St[n];
  while(1)
   {
    printf("Student Record Management System:-\n 1.Add Student \n 2.Display Students \n 3.Search Student \n 4.Exit \n Enter Choice: ");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
     case 1:
      printf("Enter Name: ");
      getchar();
      fgets(St[l].name, sizeof(St[l].name), stdin);
      printf("Enter Rollno: ");
      scanf("%d",&St[l].roll);
      printf("Enter Age: ");
      scanf("%d",&St[l].age);
      printf("Enter course: ");
      getchar();
      fgets(St[l].course, sizeof(St[l].course), stdin);
      printf("Details added Successfully!\n");
      l++;
      break;
      case 2:
        if(l==0)
        {
         printf("No record of the student found.");
        }
        else
        {
          for(int i=0; i<l; i++)
           {
            printf("\nStudent %d:-\n", i+1);
            printf("Roll Number : %d\n", St[i].roll);
            printf("Name        : %s\n", St[i].name);
            printf("Age         : %d\n", St[i].age);
            printf("Course      : %s\n", St[i].course);
            }
        }
        break;
        case 3:
        printf("Enter the roll number of the student to be searched: ");
        int r1;
        int found =0;
        scanf("%d",&r1);
        for(int i=0; i<l; i++)
         {
        if(r1==St[i].roll)
          {
            printf("\nStudent %d\n", i + 1);
            printf("Roll Number : %d\n", St[i].roll);
            printf("Name        : %s\n", St[i].name);
            printf("Age         : %d\n", St[i].age);
            printf("Course      : %s\n", St[i].course);
            found =1;
            }
        }
        if(found==0)
        {
          printf("Student Not Found: \n");
        }
        break;
        case 4:
        printf("Thank you \n Exit");
         return 0; 
        break;
        default:
        printf("INVALID CHOICE!");
        break;
    }
  }
   return 0;
}