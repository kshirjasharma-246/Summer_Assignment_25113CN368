#include<stdio.h>
#include<math.h>
int countdigits(int num);
int sumofdigitraisedtocount(int num, int count);
void checkarmstrong();
int main()
{
  checkarmstrong();
  return 0;
}
int countdigits(int num)
{  
  int c=0;
  while (num > 0)
  { 
    num=num/10;
    c++;
  }
  return c;
}
int sumofdigitraisedtocount(int num, int count)
{ int c= 0, d=0, k=num;
   double sum=0.0;
  c=countdigits(k);
  while (num > 0)
  {
    d=num%10;
    sum=sum+pow(d, c);
    num=num/10;
  }
  return (int)sum;
}

void checkarmstrong()
{
  int n, sum;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  int copy = n;
  sum = sumofdigitraisedtocount(n, countdigits(n));
  if (copy == sum)
  {
    printf("%d is an armstrong number.", n);
  }
  else
  {
    printf("%d is not an armstrong number.", n);
  }
}