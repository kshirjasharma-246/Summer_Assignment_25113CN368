#include<stdio.h>
int factorial(int);
int main()
{
  int num, f=0;
  printf("enter a positive number:");
  scanf("%d", &num);
  f=factorial(num);
  printf("factorial of %d is %d", num, f);
  return 0;
  }
  int factorial(int n)
  {
    if(n==0)
    return 1;
    else
    return n*factorial(n-1);
  }