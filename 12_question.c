// 12.	Create a program that compares the grades of two students and prints which student scored higher or if they scored the same.
#include <stdio.h>

int main()
{
    float grade1, grade2;
    printf("Enter the grade of student 1:\n");
    scanf("%f", &grade1);
    printf("Enter the grade of student 2:\n");
    scanf("%f", &grade2);
    if (grade1 > grade2)
    {
        printf("Student 1 has scored more marks.");
    }
    else if (grade1 < grade2)
    {
        printf("Student 2 has scored more marks.");
    }
    else
    {
        printf("Both of them scored equal marks.");
    }
    return 0;
}