// 31.Write a program to print right angled triangle (right allineged).
#include <stdio.h>
int main()
{
    int i, j, space, rows = 5;
    for (i = 1; i <= rows; i++)
    {
        for (space = 1; space <= rows - i; space++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
