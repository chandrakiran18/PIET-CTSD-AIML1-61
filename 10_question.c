// 10.	Develop a program that calculates the Body Mass Index (BMI) based on user input (weight in kg and height in meters) and uses if-else to categorize the BMI (Underweight, Normal, Overweight, Obese).
#include <stdio.h>

int main()
{
    float weigth, height, bmi;
    printf("Enter weight (in kg):\n");
    scanf("%f", &weigth);
    printf("Enter height (in meter):\n");
    scanf("%f", &height);
    bmi = weigth / (height * height);
    printf("BMI is:%.2f \n", bmi);
    if (bmi < 18.5)
    {
        printf("Category: Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9)
    {
        printf("Category: Normal weight\n");
    }
    else if (bmi >= 25.0 && bmi < 29.9)
    {
        printf("Category: Overweight\n");
    }
    else
    {
        printf("Category: Obese\n");
    }
    return 0;
}