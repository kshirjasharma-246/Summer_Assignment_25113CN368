#include <stdio.h>
#include <string.h>
int main()
{
  char str1[100], str2[100];
  printf("Enter 1st string: "); //Taking input from user
  fgets(str1, sizeof(str1), stdin);
  printf("Enter 2nd string: ");
  fgets(str2, sizeof(str2), stdin);
  printf("Common characters: ");
  for(int i=0; i<strlen(str1); i++) //Comparing each character of str1 with str2
    {
      if(str1[i] == ' ') //Skip spaces 
        {
         continue;
        }
     int already_printed = 0;
     for(int k=0; k<i; k++)  // Check if we already processed this character to avoid duplicate prints
       {
         if (str1[i] == str1[k])
          {
            already_printed = 1;
            break;
          }
        }

        if (!already_printed)  // If it is a new character, look for it in the second string
        {
          for (int j=0; j<strlen(str2); j++) 
          {
             if (str1[i] == str2[j]) 
               {
                  printf("%c ", str1[i]);
                  break; // Match found, move to the next character in str1
                }
            }
        }
    }
    return 0;
}