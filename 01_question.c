// 1.	Write a C program that checks if a number entered by the user is positive, negative, or zero using an if statement.
#include <stdio.h>

int main()
{
    int n;
    printf("Please enter the number :");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("The number that you have entered is Positive.");
    }
    if (n < 0)
    {
        printf("The number that you have entered is Negative.");
    }
    if (n == 0)
    {
        printf("The number that you have entered is Zero.");
    }
    return 0;
}