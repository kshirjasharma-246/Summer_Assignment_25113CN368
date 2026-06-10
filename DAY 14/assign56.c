#include<stdio.h>
int main()
{
 int n, a[100];
 printf("Enter array size: ");
 scanf("%d",&n);
 printf("Enter array elements: ");
 for(int i=0; i<n; i++)
 {
  scanf("%d", &a[i]);
 }
    
  for(int i=0; i<n; i++)
    {
     for(int j=i+1; j<n; j++)
        {
         if(a[i]==a[j])
            {
             printf("%d is duplicate element in given array \n",a[i]);
            }
        }
    }
    return 0;
}