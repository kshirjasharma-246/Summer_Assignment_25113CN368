#include<stdio.h>
int main()
{
  int a=0, b=1, c=0, n;
  printf("enter the term number required from fibonacci series");
  scanf("%d", &n);
  for(int i=1; i<n; i++)
  {
    a = b;
    b = c;
    c=a+b;
  }
   printf("%d is the %dth term in the series", c, n);
   return 0;
}