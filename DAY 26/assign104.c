#include <stdio.h>
int main()
{
    int a, score = 0;
    printf("Quiz Application\n");
    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n");
    printf("Enter your answer: ");
    scanf("%d", &a);
    if(a == 2)
        score++;
    printf("\n2. Which language is known as the mother of many programming languages?\n");
    printf("1. Java\n2. Python\n3. C\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &a);
    if(a == 3)
        score++;
    printf("\n3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &a);
    if(a == 3)
        score++;
    printf("\n4. Which symbol is used to end a statement in C?\n");
    printf("1. .\n2. ;\n3. :\n4. ,\n");
    printf("Enter your answer: ");
    scanf("%d", &a);
    if(a == 2)
        score++;
    printf("\n5. Which planet is known as the Red Planet?\n");
    printf("1. Earth\n2. Mars\n3. Venus\n4. Jupiter\n");
    printf("Enter your answer: ");
scanf("%d", &a);
    if(a == 2)
        score++;

    printf("\nYour score is %d out of 5\n", score);
    if(score == 5)
        printf("Excellent");
    else if(score >= 3)
        printf("Good");
    else
        printf("Better luck next time");
    return 0;
}