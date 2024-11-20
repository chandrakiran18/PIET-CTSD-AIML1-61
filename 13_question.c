// 13.	Write a program that calculates the discount on a product based on the user’s membership status. (e.g., Gold members get 20% off, Silver members get 10% off, and non-members get no discount.)
#include <stdio.h>

int main()
{
    float original_price, discounted_price;
    char membership_status;
    printf("Use:-  (G for gold),(S for silver),(N for non-member)\n");
    printf("Enter your membership status from the above options.\n:");
    scanf("%c", &membership_status);
    printf("Enter the original price of the product:");
    scanf("%f", &original_price);
    if (membership_status == 'G' || membership_status == 'g')
    {
        discounted_price = original_price * 0.80;
        printf("You are a Gold member. You get 20%% off.\n");
    }
    else if (membership_status == 'S' || membership_status == 's')
    {
        discounted_price = original_price * 0.90;
        printf("You are a Silver member. You get 10%% off.\n");
    }
    else if (membership_status == 'N' || membership_status == 'n')
    {
        discounted_price = original_price;
        printf("You are a Non-member. No discount is applied.\n");
    }
    else
    {
        printf("Invalid membership status entered.\n");
        return 1;
    }
    printf("Original Price: %.2f\n", original_price);
    printf("Discounted Price: %.2f\n", discounted_price);

    return 0;
}