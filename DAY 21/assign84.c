#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char string[50];
    printf("Enter the string");
    gets(string);
    int len=strlen(string);
    for(char i=0; i<len; i++)
    {
      char ch=string[i];
      if(ch>='a' && ch<='z')
        {
          string[i]=toupper(string[i]);
        }
    }
    printf("New string is: %s ",string);
    return 0;
 }