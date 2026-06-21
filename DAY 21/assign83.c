#include<stdio.h>
int main()
{
  char str[50], temp;
  int vowel=0, consonant=0;
  printf("enter a string: ");
  gets(str);
  for(int i=0; str[i]!='\0'; i++)
  {
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
    {
      ++vowel;
    }
    else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
    {
      ++consonant;
    }
  }
  printf("vowels: %d \n consonant: %d", vowel, consonant);
  return 0;
}
  