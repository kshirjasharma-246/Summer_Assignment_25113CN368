#include <stdio.h>
#include <stdlib.h>
void checkBalance(float balance);
float deposit(float balance);
float withdraw(float balance);

int main() 
{
  int pin, enteredPin, attempts = 0;
  float balance = 1000.00f; // Initial balance
  int choice;
  pin = 1234; // Default PIN (can be changed)

  printf("===Welcome to ATM Simulator==\n");
  while(attempts < 3) //PIN authentication with max 3 attempts
  {
    printf("Enter your 4-digit PIN: ");
    scanf("%d", &enteredPin);
    if(enteredPin==pin)
    {
      printf("PIN accepted.\n");
        break;
    } else
     {
       attempts++;
        printf("Incorrect PIN. Attempts left: %d\n", 3 - attempts);
     }
    }

    if(attempts==3)
    {
     printf("Too many incorrect attempts. Card blocked.\n");
     return 0;
    }

    printf("\n===== ATM Menu =====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Enter your choice from 1 to 4: ");
    scanf("%d", &choice);
    switch(choice)
    {
     case 1:
            checkBalance(balance);
            break;
     case 2:
             balance = deposit(balance);
             break;
     case 3:
             balance = withdraw(balance);
             break;
     case 4:
             printf("Thank you for using our ATM. Goodbye!\n");
             break;
     default:
            printf("Invalid choice. Please select between 1-4.\n");
        }
   return 0;
}

// Function to check balance
void checkBalance(float balance)
 {
    printf("Your current balance is: Rs.%.2f\n", balance);
 }

// Function to deposit money
float deposit(float balance)
 {
    float amount;
    printf("Enter amount to deposit: Rs.");
    scanf("%f", &amount);
    if(amount <= 0)
     {
       printf("Invalid amount. Deposit failed.\n");
       return balance;
     }
    balance += amount;
    printf("Rs.%.2f deposited successfully.\n", amount);
    return balance;
 }

// Function to withdraw money
 float withdraw(float balance)
 {
   float amount;
   printf("Enter amount to withdraw: Rs.");
   scanf("%f", &amount);
   if (amount<=0)
    {
      printf("Invalid amount. Withdrawal failed.\n");
      return balance;
    }
    if (amount > balance)
    {
      printf("Insufficient balance. Withdrawal failed.\n");
    } 
    else
     {
       balance -= amount;
       printf("Rs.%.2f withdrawn successfully.\n", amount);
    }
    return balance;
 }
