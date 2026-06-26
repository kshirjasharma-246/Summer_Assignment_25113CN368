#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
   int secretNumber, guess;
  srand(time(0)); //so that new number gets chosen everytime
  secretNumber = (rand()%100)+1;  // Generate a random number between 1 and 100

   printf("==Welcome to our  Number Guessing Game==\n");
   printf("Enter your guess: ");
   scanf("%d", &guess);
        
    if(guess==secretNumber)
     {
         printf(" Yes!! the correct number is guessed");
     } 
        else if(guess<secretNumber)
        {
         printf("Too low! Try again.\n");
        } 
        else
        {
         printf("Too high! Try again.\n");
        }
     return 0;
}