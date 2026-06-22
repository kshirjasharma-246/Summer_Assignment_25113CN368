#include <stdio.h>
#include <string.h>
int main()
{
  char str[50], ch;
  int freq=0;
  printf("enter the string: ");
  fgets(str, sizeof(str), stdin);
  printf("enter the character whose frequency is to be checked: ");
  scanf("%c", &ch);
  for(int i=0; i<50; i++)
    {
      char c=str[i];
      if(c==ch)
        {
         freq++;
        }
    }
    printf("frequency of the character: %d",freq);
    return 0;
}