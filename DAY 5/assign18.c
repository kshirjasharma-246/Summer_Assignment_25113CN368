#include<stdio.h>
int main()
{
  int n, d=0,  k, factorial, sum=0;
  printf("enter the number to be checked:");
  scanf("%d", &n);
  k=n;
    while(n>0)
   {
    d=n%10;
    n=n/10;
    factorial=1;
    for(int i=1; i<=d; i++)
    {
      factorial=factorial*i;
    }
    sum=sum+factorial;
   }
  if(sum==k)
  {
    printf("%d is a strong number.", k);
  }
  else
  {
    printf("%d is not a strong number.", k);
  }

}