#include<stdio.h>
int main()
{
  int n, a[100], count, maxfreq=0, maxelement;
 printf("Enter number of elements in array:");
 scanf("%d", &n);
 printf("Enter array elements: ");
 for(int i=0; i<n; i++)
 {
   scanf("%d", &a[i]);
 }
    maxelement=a[0];
    for(int i=0; i<n; i++)
    {
    count=1;
    for(int j=i+1; j<n; j++)
    {
      if(a[i]==a[j])
      {
        count++;
      }
    }
     if(count>maxfreq)
     {
        maxfreq=count;
        maxelement=a[i];
     }
    }
    printf("Maximum frequency element is %d with %d frequency", maxelement, maxfreq);
    return 0;
}