#include<stdio.h>
int main()
{
    int n, k, num,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    k=n;
    for(int i=1; i<n; i++)
    {
      if(k%i==0)
        {
          sum=sum+i;
        }
    }
     if(k==sum)
    {
      printf("%d is a perfect number.", k);
    }
    else
    {
      printf("%d is not a perfect number.", k);
    }
    return 0;
}