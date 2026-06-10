#include<stdio.h>
int factorial(int x);
int main()
{
  int n, fact;
  printf("Enter a number:");
  scanf("%d",&n);
  fact= factorial(n);
  printf("factorial of given number: %d", fact);
  return 0;
}

int factorial(int x)
 {
    int i,f=1;
    for(i=1; i<=x; i++)
    {
     f=f*i;
    }
    return f;
}