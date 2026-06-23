#include <stdio.h>
#include <string.h>
int main()
{
  char str1[50], str2[50];
  int len1=0, len2=0;
  char temp;
  printf("Enter 1st sentence: ");
  gets(str1);
  printf("Enter 2nd sentence: ");
  gets(str2);
  len1=strlen(str1);
  len2=strlen(str2);
  for(int i=0; i<len1-1; i++)
    {
      for(int j=0; j<len1-i-1; j++)
       {
         if(str1[j]>str1[j+1])
          {
            temp=str1[j];
            str1[j]=str1[j+1];
            str1[j+1]=temp;
          }
        }
    }
    for(int i=0; i<len2-1; i++)
    {
      for(int j=0; j<len2-i-1; j++)
        {
          if(str2[j]>str2[j+1])
            {
              char temp=str2[j];
              str2[j]=str2[j+1];
              str2[j+1]=temp;
            }
        }
    }
    if(strcmp(str1,str2)==0)
    {
      printf("given strings are anagram");
    }
    else
    {
      printf("given strings are not anagram");
    }
    return 0;
}