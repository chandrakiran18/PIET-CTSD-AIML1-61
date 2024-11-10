// 2.	Create a program that takes an integer input from the user and checks if it is even or odd using an if-else statement.
#include <stdio.h>

int main()
{
    int n;
    printf("Please enter the number :");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("The number that you have entered is 'Even'. ");
    }
    else
    {
        printf("The number that you have entered is 'Odd'. ");
    }
    return 0;
}