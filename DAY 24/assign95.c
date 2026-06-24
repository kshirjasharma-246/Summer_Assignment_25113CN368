#include <stdio.h>
#include <string.h>
int main()
{
  char str[50];
   int len=0, w=0, freq1=0, freq2=0;
  printf("enter: ");
  fgets(str, sizeof(str), stdin);
  len = strlen(str);
  for(int i=0; i<len; i++)
    {
     if(freq1>freq2)
      {
        freq2=freq1;
         w=i;
      }
     if (str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
          freq1=0;
          continue;
        }
        freq1++;
     }
    for(int i=w-freq2; i<w; i++)
    {
      printf("%c",str[i]);
    }
    printf("longest word is of lenght %d",freq2);
    return 0;
 }