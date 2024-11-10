// 6.	Create a program that asks for the temperature in Celsius and prints whether it is "Cold", "Warm", or "Hot" (Cold < 15, Warm 15-25, Hot > 25).
#include <stdio.h>

int main()
{
    float temp;
    printf("Please enter Temperature :");
    if (scanf("%f", &temp) != 1)
    {
        printf("Invalid input. Please enter a valid number for temperature.\n");
        return 1;
    }
    if (temp <= 15)
    {
        printf("Cold");
    }
    else if (temp > 15 && temp <= 25)
    {
        printf("Warm");
    }
    else
    {
        printf("Hot");
    }
    return 0;
}