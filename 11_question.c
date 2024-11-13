// 11.	Write a program that checks if a person is eligible to vote based on their age. A person must be at least 18 years old to vote.
#include <stdio.h>

int main()
{
    int age;
    printf("Enter age :\n");
    if ((scanf("%d", &age)) != 1)
    {
        printf("Invalid input.Enter a valid input.\n");
        return 1;
    }
    if (age >= 18)
    {
        printf("Eligible for voting. ");
    }
    else
    {
        printf("Not eligible for voting. ");
    }
    return 0;
}