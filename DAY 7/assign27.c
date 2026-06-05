#include<stdio.h>
int sumofdigit(int);
int main()
{
  int num, sum=0;
  printf("enter a number:");
  scanf("%d", &num);
  sum= sumofdigit(num);
  printf("sum of digits of %d is %d", num, sum);
  return 0;
  }
  int sumofdigit(int n)
  { 
    int d=0, s=0;
    if(n>0)
    {
      d=n%10;
      s=s+d;
      return d + sumofdigit(n/10);
    }
    else
    return s;
 }