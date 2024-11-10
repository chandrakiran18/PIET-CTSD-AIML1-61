// 5.	Write a program that checks if a user’s age is between 18 and 65 (inclusive). Print a message indicating if the user is eligible to work.
#include <stdio.h>

int main()
{
    int age;
    printf("Please enter age :");
    if (scanf("%f", &age)!=1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (age >= 18 && age <= 65)
    {
        printf("User is eligible to work.");
    }
    else
    {
        printf("Sorry...!,User is not eligible to work.");
    }
    return 0;
}