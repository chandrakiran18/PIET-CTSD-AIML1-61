// 23. Generate a Fibonacci series of N Numbers.
#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        printf("Fibonacci Series: \n");

        if (n >= 1)
            printf("%d ", first);

        if (n >= 2)
            printf("%d ", second);

        for (int i = 3; i <= n; i++)
        {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
        printf("\n");
    }

    return 0;
}
