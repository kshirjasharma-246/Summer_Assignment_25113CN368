#include<stdio.h>
int reverse(int num);
void checkpalindrome();
int main()
{
  checkpalindrome();
  return 0;
}
int reverse(int num)
{
  int rev=0, d=0;
  while (num != 0)
  {
    d=num%10;
    rev=rev*10+d;
    num=num/10;
  }
 return rev;
}
void checkpalindrome()
{
  int n, rev;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  rev = reverse(n);
  if (n == rev)
  {
    printf("%d is a palindrome number.", n);
  }
  else
  {
    printf("%d is not a palindrome number.", n);
  }
}