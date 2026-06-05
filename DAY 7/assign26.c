#include<stdio.h>
int fibonacci(int);
int main()
{
  int num, f=0;
  printf("enter term for which Fibonacci number is needed:");
  scanf("%d", &num);
  f=fibonacci(num);
  printf("fibonacci term at %d is %d", num, f);
  return 0;
  }
  int fibonacci(int n)
  {
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fibonacci(n-1)+fibonacci(n-2);
  }