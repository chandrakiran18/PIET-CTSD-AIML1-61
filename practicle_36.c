// 36.Write a program to print inverted number pyramid pattern.
#include <stdio.h>
int main()
{
    int i, j, space, rows = 5;
    for (i = rows; i >= 1; i--)
    {
        for (space = 1; space <= rows - i; space++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d", j);
        for (j = i - 1; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}