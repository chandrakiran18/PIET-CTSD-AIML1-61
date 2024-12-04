// 37.Write a program to print Floyd’s triangle.
#include <stdio.h>
int main()
{
    int i, j, number = 1, rows = 5;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }
    return 0;
}
