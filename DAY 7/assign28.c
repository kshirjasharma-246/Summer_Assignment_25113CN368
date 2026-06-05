#include<stdio.h>
int reverse(int);
int rev=0;
int main()
{
  int num, f=0;
  printf("enter number to be reversed:");
  scanf("%d", &num);
  f=reverse(num);
  printf("reverse of %d is %d", num, f);
  return 0;
  }
  int reverse(int n)
  {
    int d=0;
    if(n>0)
    {
      d=n%10;
      rev=rev*10+d;
      reverse(n/10);
    }
    else
    return rev;
  }