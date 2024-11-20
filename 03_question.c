// 3.	Write a program that takes a grade percentage (0-100) and prints the corresponding letter grade (A, B, C, D, F) using nested if-else statements.
#include <stdio.h>

int main()
{
    float grade_percentage;
    printf("Please enter your percentage:");
    scanf("%f", &grade_percentage);
    if (grade_percentage >= 90 && grade_percentage <= 100)
    {
        printf(":You got 'A' grade.");
    }
    else if (grade_percentage >= 80 && grade_percentage < 90)
    {
        printf(":You got 'B' grade.");
    }
    else if (grade_percentage >= 70 && grade_percentage < 80)
    {
        printf(":You got 'C' grade.");
    }
    else if (grade_percentage >= 60 && grade_percentage < 70)
    {
        printf(":You got 'D' grade.");
    }
    else if (grade_percentage <= 60)
    {
        printf(":You got 'F' grade.");
    }
    else
    {
        printf("Dear User !,you have entered invalid percentage please enter a valid percentage between 0-100. \n");
    }
    return 0;
}