#include<stdio.h>
int sum(int x, int y);
int main()
{
  int num1, num2, add=0;
  printf("Enter the two numbers:");
  scanf("%d%d",&num1, &num2);
  add= sum(num1,num2);
  printf("sum of given numbers: %d", add);
  return 0;
}
 
int sum(int x, int y)
{
  return (x+y);
}