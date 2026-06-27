#include <stdio.h>
#include <string.h>
int main()
{
  int l=0;
  struct employee
  {
     char name[50];
     int empId;
     int age;
     char department[50];
     float salary;
  };
  
  printf("Enter the number of employees: ");
  int n;
  scanf("%d", &n);
  struct employee Emp[n];
   while(1)
   {
     printf("\n Employee Management System:\n");
     printf("1.Add Employee \n");
     printf("2.Display Employees \n");
     printf("3.Search Employee \n");
     printf("4. Exit\n");
     printf("Enter Choice: ");
     int choice;
     scanf("%d", &choice);
     switch(choice)
      {
         case 1:
          printf("Enter Employee Name: ");
          getchar();
          fgets(Emp[l].name, sizeof(Emp[l].name), stdin);
          printf("Enter Employee ID: ");
          scanf("%d", &Emp[l].empId);
          printf("Enter Age: ");
          scanf("%d", &Emp[l].age);
          printf("Enter Department: ");
          getchar();
          fgets(Emp[l].department, sizeof(Emp[l].department), stdin);
          printf("Enter Salary: ");
          scanf("%f", &Emp[l].salary);
          printf("Details successfully added\n");
          l++;
          break;
         case 2:
          if(l==0)
            {
             printf("No employee records found \n");
            }
          else
           {
             for(int i=0; i<l; i++)
              {
                printf("\nEmployee %d\n", i+1);
                printf("Employee ID : %d\n", Emp[i].empId);
                printf("Name        : %s", Emp[i].name);
                printf("Age         : %d\n", Emp[i].age);
                printf("Department  : %s", Emp[i].department);
                printf("Salary      : %.2f\n", Emp[i].salary);
              }
           }
            break;
             case 3:
              printf("Enter Employee ID to Search: ");
              int id;
              int found = 0;
              scanf("%d", &id);
              for(int i=0; i<l; i++)
                {
                 if(id==Emp[i].empId)
                  {
                     printf("\nEmployee Found\n");
                     printf("Employee ID : %d\n", Emp[i].empId);
                     printf("Name        : %s", Emp[i].name);
                     printf("Age         : %d\n", Emp[i].age);
                     printf("Department  : %s", Emp[i].department);
                     printf("Salary      : %.2f\n", Emp[i].salary);
                            found = 1;
                   }
                }
                if(found==0)
                {
                  printf("Employee Not Found!\n");
                }
                break;
             case 4:
              printf("Thank You!\n");
              return 0;
             default:
             printf("Invalid Choice!\n");
        }
    }
    return 0;
}