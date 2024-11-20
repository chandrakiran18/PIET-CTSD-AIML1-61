// 14. Generate student’s result based on percentage.
#include <stdio.h>

int main()
{
    float marks1, marks2, marks3, marks4, marks5, total, percentage;

    printf("Enter marks for subject 1: ");
    scanf("%f", &marks1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &marks2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &marks3);
    printf("Enter marks for subject 4: ");
    scanf("%f", &marks4);
    printf("Enter marks for subject 5: ");
    scanf("%f", &marks5);
    total = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage = (total / 500) * 100;
    printf("Total marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    if (percentage >= 90)
    {
        printf("Grade: A\n");
        printf("Result: Excellent\n");
    }
    else if (percentage >= 75)
    {
        printf("Grade: B\n");
        printf("Result: Very Good\n");
    }
    else if (percentage >= 60)
    {
        printf("Grade: C\n");
        printf("Result: Good\n");
    }
    else if (percentage >= 50)
    {
        printf("Grade: D\n");
        printf("Result: Pass\n");
    }
    else
    {
        printf("Grade: F\n");
        printf("Result: Fail\n");
    }
    return 0;
}
