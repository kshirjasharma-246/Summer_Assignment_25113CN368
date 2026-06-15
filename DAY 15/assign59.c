#include <stdio.h>
int main()
{
  int n, arr[100], newarr[100];
  printf("Enter number of elements: ");
  scanf("%d", &n);
  printf("Enter array elements: ");
  for(int i=0; i<n; i++)
    {
     scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
      if(i==0)
      {
        newarr[0]=arr[n-1];
      }
      else
      {
        newarr[i]=arr[i-1];
      }
    }
    printf("Right rotated array is: ");
    for(int i=0; i<n; i++)
    {
      printf("%d ", newarr[i]);
    }
    return 0;
}