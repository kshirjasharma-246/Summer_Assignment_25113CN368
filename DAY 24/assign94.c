#include <stdio.h>
#include <string.h>
int main()
{
  char str[50];
  int l=0;
  printf("Enter string: ");
  scanf("%49s", str);
  for(int i=0; str[i]!='\0'; i++)
  {
    l=i+1;
  }
  char str2[l];
  int m=0;
  for(int i=strlen(str)-1; i> 0; i--)
   {
    int freq=0;
    for(int j=i; j>=0; j--)
    {
     if(str[i]==str[j])
     freq++;
    }
    if(freq==1)
    {
      str2[m++]=str[i];
    }
 }
  str2[m] = '\0';
  printf("compressed string: ");
  for(int i=m-1;i>=0;i--)
  {
    int freq=0;
  for(int j=0; j<l; j++)
 {
    if(str2[i]==str[j])
    freq++;
 }
  printf("%c%d", str2[i], freq);
 }
 return 0;
 }