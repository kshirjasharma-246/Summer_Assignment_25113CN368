#include <stdio.h>
int main()
{
 int n, a[50], count=0, x;
 printf("Enter array size:");
 scanf("%d", &n);
 printf("Enter array elements\n");
 for (int i=0; i<n; i++)
    {
    scanf("%d", &a[i]);
    }
  printf("Enter element whose frequency is to be found: ");
  scanf("%d", &x);
  for(int i=0; i<n; i++)
    {
      if (a[i]==x)
        {
          count++;
        }
    }
    if (count==0)
    {
    printf("%d is not present in given array", x);
    }
    else if(count==1)
    {
     printf("%d is present 1 time in array", x);
    }
    else
    {
    printf("%d is present %d times in array", x, count);
    }
   return 0;
}