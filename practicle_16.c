// 16. Create calculator using switch case.
#include <stdio.h>

int main()
{
    float num1, num2, result;
    int choice;

    printf("Select an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice (1/2/3/4): ");
    scanf("%d", &choice);

    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (choice)
    {
    case 1:
        result = num1 + num2;
        printf("Result: %.2f\n", result);
        break;
    case 2:
        result = num1 - num2;
        printf("Result: %.2f\n", result);
        break;
    case 3:
        result = num1 * num2;
        printf("Result: %.2f\n", result);
        break;
    case 4:
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Result: %.2f\n", result);
        }
        else
        {
            printf("Error! Division by zero is not allowed.\n");
        }
        break;
    default:
        printf("Invalid choice! Please select a valid operation.\n");
        break;
    }

    return 0;
}
