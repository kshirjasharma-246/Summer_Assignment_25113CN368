#include <stdio.h>
int main() 
{
  int age;
  printf("Enter your age: "); 
  scanf("%d", &age);
  if(age<0 || age>100) // Check for negative or unrealistic ages
    {
     printf("Invalid age! Please enter a realistic age.\n");
    }
    else if (age >= 18)
   {
     printf("You are eligible to vote.\n");
    } 
    else 
    {
     printf("You are NOT eligible to vote. You need to wait %d more year(s).\n", 18 - age);
    }
  return 0; // Successful execution
}