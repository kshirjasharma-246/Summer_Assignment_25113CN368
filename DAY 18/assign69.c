#include <stdio.h>
int main()
{
  int n, arr[100], swap;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  printf("Enter array elements: ");
  for(int i=0; i<n ;i++)
  {
   scanf("%d", &arr[i]);
  }
  for(int i=0; i<n-1; i++)
   {
    for(int j=0; j<n-i-1; j++)
     {
        if(arr[j]>arr[j+1])
        {
         swap=arr[j];
         arr[j]=arr[j+1];
         arr[j+1]=swap;
        }
     }
    }
    printf("Sorted array using bubble sort is: ");
    for(int i=0; i<n; i++)
    {
      printf("%d ", arr[i]);
    }
   return 0;
}