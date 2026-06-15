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
    int j=0;
    for(int i=0; i<n; i++)
    {
     if(arr[i]!=0)
     {
        newarr[j]=arr[i];
        j++;
     }
    }
    while(j<n)
    {
      newarr[j]=0;
      j++;
    }
    printf("New array is ");
    for(int i=0; i<n; i++)
    {
      printf("%d",newarr[i]);
    }
    return 0;
 }