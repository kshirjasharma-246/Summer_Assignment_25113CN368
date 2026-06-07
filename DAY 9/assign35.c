#include<stdio.h>
int main()
{
  char i, j;
  for(i=65; i<=69; i++)
  {
    printf("\n");
    for(j=65; j<=i; j++)
    {
       printf("%c",i);
    }
  }
 return 0;
}