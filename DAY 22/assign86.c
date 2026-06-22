#include <stdio.h>
#include <string.h>
int main()
{
  char str[50];
  printf("enter a sentence: ");
  fgets(str, sizeof(str), stdin); 
  int w = 0;
  int len = strlen(str);
  for (int i=0; i<len; i++) 
  {
    if(str[i]==' ' || str[i]=='\n' || str[i]=='\t') 
    {
     if (i>0 && str[i-1]!=' ' && str[i-1]!='\n' && str[i-1]!='\t')
        w++;
     }
   }
    if (len>0 && str[len-1]!=' ' && str[len-1]!='\n' && str[len-1]!='\t')
        w++;
    printf("%d is the word count", w);
    return 0;
}