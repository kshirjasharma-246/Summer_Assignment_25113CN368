#include<stdio.h>
int main()
{
  int n, i, j, a[100], sum;
 printf("Enter number of elements in array:");
 scanf("%d", &n);
 printf("Enter array elements: ");
 for(i=0; i<n; i++)
 {
  scanf("%d", &a[i]);
 }
 printf("Enter required sum: ");
 scanf("%d", &sum);
 printf("pairs with the given sum are:\n");
    for(i=0; i<n; i++)
    {
     for(j=i+1; j<n; j++)
     {
            if(a[i]+a[j]==sum)
            {
             printf("%d %d\n", a[i], a[j]);
            }
        }
    }
    return 0;
}