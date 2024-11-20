// 17. Find area of rectangle, circle and square using switch case.
#include <stdio.h>

int main()
{
    int choice;
    float length, width, side, radius, area;

    printf("Select the shape to calculate area:\n");
    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("3. Square\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter the length of the rectangle: ");
        scanf("%f", &length);
        printf("Enter the width of the rectangle: ");
        scanf("%f", &width);
        area = length * width;
        printf("Area of Rectangle: %.2f\n", area);
        break;

    case 2:
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        area = 3.14 * radius * radius;
        printf("Area of Circle: %.2f\n", area);
        break;

    case 3:
        printf("Enter the side of the square: ");
        scanf("%f", &side);
        area = side * side;
        printf("Area of Square: %.2f\n", area);
        break;

    default:
        printf("Invalid choice! Please select a valid option.\n");
        break;
    }

    return 0;
}
