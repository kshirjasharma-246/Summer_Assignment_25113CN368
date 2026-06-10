#include<stdio.h>
int main()
{
  int n, a[100], swap;
  printf("Enter array size:");
  scanf("%d",&n);
  printf("Enter the array elements: ");
  for(int i=0; i<n; i++)
    {
     scanf("%d",&a[i]);
    }
    for(int i=0; i<n-1; i++)
    {
    for(int j=0; j<n-i-1; j++)
     {
      if(a[j]>a[j+1])
       {
        swap = a[j];
        a[j] = a[j+1];
        a[j+1] = swap;
        }
     }
    }
    printf("Second largest number in given array:%d", a[n-2]);
    return 0;
}