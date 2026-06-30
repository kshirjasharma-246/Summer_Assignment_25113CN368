#include <stdio.h>
int main()
{
 int arr[100], n=0, choice, value, i;
 while(1)
 {
  printf("\n Menu-Driven array \n");
  printf("1.Insert element \n");
  printf("2.Display array \n");
  printf("3.Exit \n");
  printf("Enter your choice: ");
  scanf("%d", &choice);

  if(choice==1)
  {
    if(n>=100)
    {
     printf("Array is full.\n");
    }
    else
    {
     printf("Enter value: ");
     scanf("%d", &value);
     arr[n]=value; // Add at the end
     n++;
     printf("Element inserted.\n");
    }
   }
    else if(choice==2)
    {
     if(n==0)
     {
      printf("Array is empty.\n");
     }
    else
    {
      printf("Array elements: ");
      for(int i=0; i<n; i++)
       {
         printf("%d ", arr[i]);
        }
        printf("\n");
   }
   }
    else if(choice==3)
    {
      printf("Exiting program.\n");
      break;
    }
    else
    {
        printf("Invalid choice! Try again.\n");
     }
  }
 return 0;
}