#include <stdio.h>
int main()
{
 int n, arr[100], newarr[100];
 printf("enter number of elements in array: ");
 scanf("%d", &n);
 printf("enter array elements: ");
 for(int i=0; i<n; i++)
    {
     scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
      if(i==0)
      {
        newarr[n-1]=arr[i];
      }
       else
      {
        newarr[i-1]=arr[i];
      }
    }
    printf("Left rotated array is: ");
    for(int i=0;i<n;i++)
    {
     printf("%d ",newarr[i]);
    }
    return 0;
 }