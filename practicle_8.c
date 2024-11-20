// 8. Find area of rectangle and circle.
#include <stdio.h>

int main() 
{
    float length, breadth, radius, areaRectangle, areaCircle;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    areaRectangle = length * breadth;
    printf("Area of the rectangle: %.2f\n", areaRectangle);

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    areaCircle = 3.14 * radius * radius;
    printf("Area of the circle: %.2f\n", areaCircle);

    return 0;
}
