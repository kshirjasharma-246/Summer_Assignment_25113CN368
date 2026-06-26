 #include <stdio.h>
 #include <string.h>

 void sortByLength(char words[][50], int n)
 { int maxIndex = 0;
  if(n<=1) 
  return; // Base case
  for(int i=1; i<n; i++) //Finding longest word in the first n elements 
  {
     if(strlen(words[i])>strlen(words[maxIndex]))
      {
         maxIndex = i;
      }
    }

    if(maxIndex!=n-1)  //Swapping longest word with the last word
     {
       char swap[50];
       strcpy(swap, words[maxIndex]);
       strcpy(words[maxIndex], words[n-1]);
       strcpy(words[n - 1], swap);
     }
      sortByLength(words, n-1);  //Recursively sort remaining words
     }

    int main() 
    {
    int n;
    printf("Enter number of words: ");
    scanf("%d", &n);
    char words[n][50];
    printf("Enter %d words: ", n);
    for(int i=0; i<n; i++)
    {
     scanf("%s", words[i]);
    }
    sortByLength(words, n);
    printf("Words sorted by length: ");
    for(int i=0; i<n; i++)
    {
      printf("%s", words[i]);
    }
    return 0;
 }