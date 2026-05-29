#include<stdio.h>
int main()
{
  int n, d=0, s=0;
  printf("enter a number");
  scanf("%d", &n);
  for(int i=0; i<=n; i++)
  {
    d=n%10;
    s=s+d;
    n=n/10;
  }
  printf("sum of digit: %d", s);
  return 0;
}