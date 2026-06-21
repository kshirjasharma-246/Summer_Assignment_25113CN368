#include<stdio.h>
int main()
{
  char str[50], temp;
  int i, j, l=0;
  printf("enter a string: ");
  gets(str);
  for(i=0; str[i]!='\0'; i++)
  {
    l++;
  }
  for(i=0, j=l-1; i<j; i++, j--)
  {
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
  }
  printf("Reversed String: %s", str);
  return 0;
}
