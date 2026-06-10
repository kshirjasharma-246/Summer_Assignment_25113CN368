#include<stdio.h>
int main()
{
    int n, arr[100];
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements:");
    for(int i=0; i<n; i++)
    {
      scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
       printf("%d ",arr[i]);
    }
    return 0;
}