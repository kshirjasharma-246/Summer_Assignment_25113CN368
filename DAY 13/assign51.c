#include <stdio.h>
int main()
{
  int n, a[100], max, min;
  printf("Enter the array size:");
  scanf("%d", &n);
  printf("Enter the array elements: ");
  for (int i=0; i<n; i++)
    {
      scanf("%d", &a[i]);
    }
      max=min=a[0];
      for(int i=1; i<n; i++)
        {
          if (a[i] > max)
            {
              max = a[i];
            }
          if (a[i] < min)
            {
              min = a[i];
            }
        }
        printf("maximum of given array: %d\n ", max);
        printf("minimum of given array: %d ", min);
        return 0;
    }
    