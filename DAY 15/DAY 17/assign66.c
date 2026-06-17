#include <stdio.h>
int main()
{
  int n, m, arr1[50], arr2[50], u[100];
  printf("Enter number of elements: ");
  scanf("%d", &n);
  printf("Enter 1st array elements: ");
  for(int i=0; i<n ;i++)
   {
     scanf("%d", &arr1[i]);
   }
   printf("Enter 2nd array elements: ");
   for(int i=0; i<n; i++)
   {
     scanf("%d", &arr2[i]);
   }
    m=n+n;
    for(int i=0; i<n; i++)
    {
        u[i]=arr1[i];
    }
    for(int i=0; i<n; i++)
    {
        u[n+i]=arr2[i];
    }
    for(int i=0; i<m; i++)
    {
     for(int j=i+1; j<m; j++)
     {
      if(u[i]==u[j])
      {
        for(int k=j; k<m-1; k++)
         {
            u[k]=u[k+1];
         }
            m--;
            j--;
      } 
     }
    }
    printf("union of both the array is ");
    for(int i=0; i<m; i++)
    {
      printf("%d ", u[i]);
    }
    return 0;
}