// 39.Write a program to print Binary pyramid.
#include <stdio.h>
int main()
{
    int rows = 5, i, j, k;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
            printf(" ");
        for (k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == 2 * i - 1)
                printf("1");
            else
                printf("0");
            if (k < 2 * i - 1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}