#include<stdio.h>
int main()
{
  int n, arr[100], expected_sum=0, actual_sum=0, missing_number;
printf("enter number of elements in array: ");
scanf("%d", &n);
printf("enter elements for array: ");
for(int i=0; i<n; i++)
{
  scanf("%d", &arr[i]);
}
for(int i=0; i<n; i++)
{
  actual_sum += arr[i];
}
expected_sum = (n*(n+1))/2;
missing_number = actual_sum - expected_sum;
printf("missing number is: %d", missing_number);
return 0;
}