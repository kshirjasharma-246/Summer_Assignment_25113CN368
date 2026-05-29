#include<stdio.h>
int main()
{
  int n, d=0, rev=0;
  printf("enter a number");
  scanf("%d", &n);
  int k=n;
  for(int i=0; i<=n; i++)
  {
    d=n%10;
    rev=rev*10+d;
    n=n/10;
  }
  if(rev==n)
  {
    printf("%d is a palindrome number" ,k);
  }
  else
  {
    printf("%d is not a palindrome number" ,k);
  }
  return 0;
}