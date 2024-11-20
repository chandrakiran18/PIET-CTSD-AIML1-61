// 19. Print the sum of odd and even numbers between 51 and 550.
#include <stdio.h>

int main()
{
    int evenSum = 0, oddSum = 0;

    for (int i = 51; i <= 550; i++)
    {
        if (i % 2 == 0)
        {
            evenSum = evenSum + i;
        }
        else
        {
            oddSum = oddSum + i;
        }
    }

    printf("Sum of even numbers between 51 and 550: %d\n", evenSum);
    printf("Sum of odd numbers between 51 and 550: %d\n", oddSum);

    return 0;
}
