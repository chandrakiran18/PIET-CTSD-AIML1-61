// 26. Generate result sheet for 5 students using for loop.
#include <stdio.h>

int main()
{
    char name[5][50];
    int marks[5][3];
    int total[5];
    float average[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", name[i]);

        total[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
        }
        average[i] = total[i] / 3.0;
    }
    printf("\nResult Sheet:\n");
    printf("------------------------------------------------------------\n");
    printf("Name\t\tTotal Marks\tAverage Marks\n");
    printf("------------------------------------------------------------\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%-10s\t%d\t\t%.2f\n", name[i], total[i], average[i]);
    }
    return 0;
}
