#include<stdio.h>
int main()
{
  int a=0, b=0, c=0;;
  printf("enter lower and upper limit respectively");
  scanf("%d%d", &a, &b);
  for(int i=a; i<=b; i++)
  {
    c=0;
    for(int j=2; j<=i; j++)
    {
      if(i%j==0)
      {
        c++;
      }
    }
    if(c==1)
    {
      printf("%d is a prime number\n", i);
    }
  }
}