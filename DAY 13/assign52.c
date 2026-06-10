#include <stdio.h>
int main()
{
  int n, a[100], evencount = 0, oddcount = 0;
  printf("Enter positive number upto 100 for array size:");
  scanf("%d", &n);
  printf("Enter the elements of array: ");
    for (int i = 0; i<n; i++)
    {
      scanf("%d", &a[i]);
    }
   for (int i=0; i<n; i++)
    {
      if (a[i] % 2 == 0)
        {
          evencount++;
        }
        else
        {
          oddcount++;
        }
    }
    printf("even elements of given array: %d\n", evencount);
    printf("odd elements of given array: %d\n", oddcount);
    return 0;
}