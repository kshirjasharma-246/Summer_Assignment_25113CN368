#include<stdio.h>
int main()
{
  int arr1[50], arr2[50], merged[100], i, n, m;
  printf("Enter number of elements for 1st and 2nd array: ");
  scanf("%d", &n);
  m = n + n;
 
  printf("Enter elements of first array: ");
  for(i=0; i<n; i++)
  {
    scanf("%d", &arr1[i]);
  }
  printf("Enter elements of second array: ");
  for(i=0; i<n; i++)
  {
    scanf("%d", &arr2[i]);
  }
 
  for(i=0; i<n; i++)
    {
      merged[i] = arr1[i];
    }
    for(i=0; i<n; i++)
    {
      merged[n+i] = arr2[i];
    }
   printf("Merged array: ");
    for(i=0; i<m; i++)
    {
      printf("%d ", merged[i]);
    }
    return 0;
}
