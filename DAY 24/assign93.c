#include <stdio.h>
#include <string.h>
int main()
{
  char str1[50], str2[50];
  int l=0;
  printf("enter the 1st string: ");
  scanf("%49s", str1);
  printf("enter the 2nd string: ");
  scanf("%49s", str2);
  char sc[100];
  for(int i=0; str1[i]!='\0'; i++)
  { 
    sc[i]=str1[i];
    l=i+1;
  }
  for(int i=0; str1[i]!='\0'; i++)
   {
     sc[l+i]=str1[i];
    }
    sc[2*l]='\0';
   for(int i=0; i<l; i++)
    {
       int freq=0;
      for(int j=0; j<l; j++)
       {
         if(sc[i+j]==str2[j])
         {
            freq++;
         }
     }
     if(freq==l)
      {
        printf("string rotation is found at %d",i);
        return 0;
     }
}
printf("not a rotation");
}