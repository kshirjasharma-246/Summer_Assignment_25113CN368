#include<stdio.h>
int main()
{ 
  int n, i, j, arr[100], count=0, k;
  printf("Enter number of elements in array: ");
  scanf("%d", &n);
  printf("Enter array elements: ");
     for(i=0; i<n; i++)
      {
        scanf("%d", &arr[i]);
      }
     for (i=0; i<n; i++) 
     {
      for (j=i+1; j<n; j++) 
      {
        if (arr[i]==arr[j])
         {
          for (int k = j; k < n - 1; k++) // shifting elements to left
           {
            arr[k]=arr[k + 1];
            }
            n--; // Reduce size
            j--; // Check new element at position j
            }
        }
    }
   printf("Array after removing duplicates: ");
    for (i=0; i<n; i++) 
    {
      printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
 }

