// 24. Generate a Fibonacci series up to N Numbers.
#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next;
    printf("Enter the number up to which Fibonacci series should be generated: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        printf("Fibonacci Series: \n");

        if (n >= 0)
            printf("%d ", first);

        if (n >= 1)
            printf("%d ", second);

        next = first + second;
        while (next <= n)
        {
            printf("%d ", next);
            first = second;
            second = next;
            next = first + second;
        }
        printf("\n");
    }

    return 0;
}
