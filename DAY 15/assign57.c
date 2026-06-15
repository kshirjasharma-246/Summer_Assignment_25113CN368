#include <stdio.h>
int main()
{
  int n, a[100], rev[100];
  printf("Enter number of elements in array: ");
  scanf("%d", &n);
  printf("Enter array elements: ");
  for(int i=0; i<n; i++)
  {
   scanf("%d", &a[i]);
  }
    int i=0, j=n-1;
    while(j>=0)
    {
      rev[i]=a[j];
      i++;
      j--;
    }
    printf("Reverse of array is: ");
    for(int i=0; i<n; i++)
    {
     printf("%d ", rev[i]);
    }
    return 0;
}