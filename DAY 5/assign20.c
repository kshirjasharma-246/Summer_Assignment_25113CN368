#include <stdio.h>
int main() 
{
 int n;
 printf("enter number to find largest prime factor: ");
 scanf("%d", &n);
 int i;
 printf("largest prime factor of %d is: ", n);
 for( i=2;i<=n;i++)
 {
  if(n%i==0)
   {
     n=n/i;
     i--;
    }
 }
 printf("%d", i);
  return 0;
}
