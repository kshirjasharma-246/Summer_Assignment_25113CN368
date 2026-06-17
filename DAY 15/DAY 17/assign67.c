#include <stdio.h>
int main()
{
  int n, arr1[100], arr2[100];
  printf("Enter number of array elements: ");
  scanf("%d", &n);
  printf("Enter 1st array elements:");
  for(int i=0; i<n; i++)
  {
    scanf("%d", &arr1[i]);
  }
  printf("Enter 2nd array elements:");
  for(int i=0; i<n; i++)
   {
    scanf("%d", &arr2[i]);
  }
   printf("Intersection of both arrays is: ");
   for(int i=0; i<n; i++)
    {
      for(int j=0; j<n; j++)
        {
         if(arr1[i]==arr2[j])
         {
            printf("%d ",arr1[i]);
            break;
         }
        }
    }
    return 0;
}