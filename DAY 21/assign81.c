#include<stdio.h>
int main()
{
  char str[50];
  int i;
  printf("enter the string: ");
  gets(str);
  i=0;
  while(str[i]!='\0')
  {
    i++;
  }
  printf("length of given string is %d ", i);
  return 0;
}