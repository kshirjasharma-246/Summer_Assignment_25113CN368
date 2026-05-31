#include<stdio.h>
#include<math.h>
int main()
{
  int n, k, num, c=0, digit=0, d = 0;
  double sum = 0.0;
  printf("Enter an integer: ");
  scanf("%d", &n);
  k = n;
  num = n;
  while (n != 0)
  { 
    n=n/10;
     c++;
    }
      while(num > 0)
      { 
        digit= num%10;
        sum=(sum + (pow(digit, c)));
        num=num/10;
      }
    if ((int)sum == k) 
    {
        printf("%d is an Armstrong number", k);
    } 
    else 
    {
        printf("%d is not an Armstrong number", k);
    }
      return 0;
    }