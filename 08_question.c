// 8.Create a program that accepts a student's score and classifies it as "Excellent" (90-100), "Good" (75-89), "Average" (50-74), or "Fail" (0-49) using if-else statements.
#include <stdio.h>

int main()
{
    int score;
    printf("Enter your score :");
    scanf("%d", &score);
    if ((score >= 0 && score <= 100) != 1)
    {
        printf("Invalid input. Please enter valid digits between 0-100.\n");
        return 1;
    }
    if (score >= 90 && score <= 100)
    {
        printf("Excellent");
    }
    else if (score >= 75 && score < 90)
    {
        printf("Good");
    }
    else if (score >= 50 && score < 75)
    {
        printf("Average");
    }
    else if (score >= 0 && score < 50)
    {
        printf("Fail");
    }
    return 0;
}