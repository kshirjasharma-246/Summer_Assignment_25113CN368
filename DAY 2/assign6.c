#include<stdio.h>
int main()
{
  int n, rev=0, d=0;
  printf("enter a number");
  scanf("%d", &n);
  for(int i=0; i<=n; i++)
  {
    d=n%10;
    rev=rev*10+d;
    n=n/10;
  }
    printf("reverse of number: %d", rev);
    return 0;
}