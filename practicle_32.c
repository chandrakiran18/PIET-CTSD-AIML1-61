// 32.Write a program to inverted right angled triangle (right aligned).
#include <stdio.h>
int main()
{
    int i, j, space, rows = 5;
    for (i = rows; i >= 1; i--)
    {
        for (space = 0; space < rows - i; space++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
