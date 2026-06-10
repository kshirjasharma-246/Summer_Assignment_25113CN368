#include <stdio.h>
int main()
{
 int n, arr[100], sum = 0;
 double avg=0.0;
 printf("Enter the array size: ");
 scanf("%d", &n);
 printf("Enter array elements:\n ");
 for (int i=0; i<n; i++)
  { scanf("%d", &arr[i]);
    sum= sum+arr[i];
  }
  avg = sum/n;
  printf("Sum of array elements: %d \n", sum);
  printf("Average of array elements: %f", avg);
  return 0;
}