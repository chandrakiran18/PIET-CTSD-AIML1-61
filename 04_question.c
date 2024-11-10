// 4.	Develop a program that reads three integers from the user and prints the largest of the three using if-else statements.
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter the three numberes \n:");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3)
    {
        if (num1 == num2 && num1 == num3)
        {
            printf("All three numbers are the same: %d\n", num1);
        }
        else if (num1 == num2 || num1 == num3)
        {
            printf("%d is the largest number, but there is a tie with another number.\n", num1);
        }
        else
        {
            printf("%d is the largest number.\n", num1);
        }
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        if (num2 == num1 && num2 == num3)
        {
            printf("All three numbers are the same: %d\n", num2);
        }
        else if (num2 == num1 || num2 == num3)
        {
            printf("%d is the largest number, but there is a tie with another number.\n", num2);
        }
        else
        {
            printf("%d is the largest number.\n", num2);
        }
    }
    else if (num3 >= num1 && num3 >= num2)
    {
        if (num3 == num1 && num3 == num2)
        {
            printf("All three numbers are the same: %d\n", num3);
        }
        else if (num3 == num1 || num3 == num2)
        {
            printf("%d is the largest number, but there is a tie with another number.\n", num3);
        }
        else
        {
            printf("%d is the largest number.\n", num3);
        }
    }
    return 0;
}