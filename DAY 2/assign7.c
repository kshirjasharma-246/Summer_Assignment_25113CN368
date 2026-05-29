#include<stdio.h>
int main()
{
  int n, prod=1, d=0;
  printf("enter a number");
  scanf("%d", &n);
  for(int i=0; i<=n; i++)
  {
    d=n%10;
    prod=prod*d;
    n=n/10;
  }
  printf("product of digit: %d", prod);
  return 0;
   
}