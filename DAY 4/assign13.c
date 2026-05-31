#include<stdio.h>
int main()
{
  int a, b, c, n;
  printf("enter a positive term for which fibonacci series will be printed");
  scanf("%d", &n);
  a = 0;
  b = 1;
  c = 0;
  for(int i=1; i<=n; i++)
  {
    printf("%d ", c);
    a = b;
    b = c;
    c=a+b;
  }
    return 0;
}