#include<stdio.h>
int sumoffactors(int x);
void checkperfect();

int main()
{
checkperfect();
  return 0;
}
int sumoffactors(int x)
{
 int sum = 0;
 for(int i=1; i<x; i++)
 {
  if(x%i == 0)
  {
   sum= sum+i;
  }
 }
 return sum;
}
 
void checkperfect()
{
  int n, k, sum;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  k = n;
  sum = sumoffactors(n);
   if(k==sum)
    {
     printf("%d is a perfect number.", k);
    }
    else
    {
     printf("%d is not a perfect number.", k);
    }
}