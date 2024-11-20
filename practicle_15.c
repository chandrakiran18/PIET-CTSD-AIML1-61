// 15. Generate electricity bill based on usage of units.
#include <stdio.h>

int main()
{
    float units, totalBill;
    printf("Enter the number of units consumed: ");
    scanf("%f", &units);
    if (units <= 200)
    {
        totalBill = units * 1.50;
    }
    else if (units <= 300)
    {
        totalBill = (200 * 1.50) + ((units - 200) * 2.00);
    }
    else
    {
        totalBill = (200 * 1.50) + (100 * 2.00) + ((units - 300) * 3.00);
    }
    printf("Total electricity bill: Rs. %.2f\n", totalBill);
    return 0;
}
