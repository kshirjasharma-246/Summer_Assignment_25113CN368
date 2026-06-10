#include <stdio.h>
#include <math.h>
int isPrime(int num);
int main() 
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  if (isPrime(n)==1)
  printf("%d is a Prime Number.\n", n);
  else
  printf("%d is Not a Prime Number.\n", n);
  return 0;
}
int isPrime(int num)
{int c=0;
for (int i=2; i<=sqrt(num); i++) 
{
  if (num%i == 0) 
  {
    c++;
    break;
  }
}
if (c == 0)
 return 1;
else
 return 0;
}
