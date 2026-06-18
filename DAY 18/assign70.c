#include <stdio.h>
int main()
{
  int n, lowerindex, swap;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter elements: ");
  for(int i =0; i<n; i++) 
  {
    scanf("%d", &arr[i]);
  }
  for(int i=0; i<n-1; i++) 
  {
    lowerindex =i;
     for(int j=i+1; j<n; j++) 
     {
         if (arr[j]<arr[lowerindex]) 
         {
           lowerindex=j;
         }
     }
        swap =arr[i];
        arr[i]=arr[lowerindex];
        arr[lowerindex] =swap;
  }
    printf("Sorted array using selection sort: ");
    for(int i=0; i<n; i++) 
    {
      printf("%d ", arr[i]);
    }
    return 0;
}