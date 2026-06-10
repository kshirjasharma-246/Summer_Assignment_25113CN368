#include <stdio.h>
int main()
{
  int n, x, a[100], found = 0;
  printf("Enter array size: ");
  scanf("%d", &n);
  printf("Enter array elements:");
  for(int i=0; i<n; i++)
    {
    scanf("%d", &a[i]);
    }
  printf("Enter element to be searched: ");
  scanf("%d", &x);
  for(int i=0; i<n; i++)
    {
      if (a[i]== x)
      {
        found = 1;
        break;
      }
       if(found==1)
       {
        printf("%d is the required element at index: %d and at location:%d", x, i, i + 1);
       }
       else
       {
        printf("Given element not found in array");
       }    
     return 0;
    } 
}