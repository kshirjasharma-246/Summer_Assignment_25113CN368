#include <stdio.h>
#include <string.h>
int main()
{
  char str[50];
  int present=0;
  printf("Enter a sentence: ");
  gets(str);
  int len=strlen(str)-1;
  for(int i=0; i<len; i++)
    {
     for(int j=i+1; j<len; j++)
      {
        if(str[i]==str[j])
        {
          printf("First repeating character: %c ",str[i]);
          present=1;
          break;
        }
       }
    if(present) 
    break;
    }
    if(!present)
    {
      printf("No repeating characer is present in given sentence");
    }
    return 0;
}