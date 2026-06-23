#include <stdio.h>
#include <string.h>
int main()
{
 char str[50];
 int index=-1, f2=0;
 printf("enter the string :");
 fgets(str, sizeof(str), stdin);
 for(int i=0;str[i]!='\0';i++)
 {
   int f=0;
    for(int l=i+1; str[l]!='\0'; l++)
    {
      if(str[i]==str[l])
      f++;
    }
    if(f>f2)
    {
      f2=f;
      index=i;
    }
 }
 printf("Maximum occuring character: %c",str[index]);
 return 0;
}