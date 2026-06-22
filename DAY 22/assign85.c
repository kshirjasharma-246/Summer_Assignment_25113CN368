#include <stdio.h>
#include <string.h>
int main()
{
  char str[50];
  printf("Enter the string: ");
  scanf("%s", str);
  int i = 0;
  int j = strlen(str) - 1;
  while(i<j)
   {
     if (str[i]!=str[j])
      {
        printf("String is not palindrome");
        return 0;
      }
        i++;
        j--;
    }
    ("String is palindrome");
     return 0;
}