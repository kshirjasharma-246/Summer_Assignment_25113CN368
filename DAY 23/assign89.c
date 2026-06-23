#include <stdio.h>
#include <string.h>
int main()
{
  char str[50];
  int present=0;
  printf("Enter a sentence: ");
  scanf("%s", str);
  int len=strlen(str)-1;
  for(int i=0; i<len; i++)
   {
     int count=0;
     for(int j=0; j<len; j++)
      {
        if(str[i]==str[j])
        {
          count++;
        }
      }
     if(count==1)
      {
        printf("1st non-repeating character: %c ",str[i]);
         present=1;
        break;
       }
    }
      if(!present)
      {
        printf("There is no such character");
      }
     return 0;
}