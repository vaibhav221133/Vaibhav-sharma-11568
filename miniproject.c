#include <stdio.h>

int main()
{
    int units;
    float amount = 0, surcharge, total_bill;

    // Input total units
    printf("Enter total electricity units consumed: ");
    scanf("%d", &units);

    // Slab-wise calculation using else-if ladder
    if (units <= 50)
    {
        amount = units * 0.50;
    }
    else if (units <= 150)
    {
        amount = (50 * 0.50);
        amount = amount + ((units - 50) * 0.75);
    }
    else if (units <= 250)
    {
        amount = (50 * 0.50);
        amount = amount + (100 * 0.75);
        amount = amount + ((units - 150) * 1.20);
    }
    else
    {
        amount = (50 * 0.50);
        amount = amount + (100 * 0.75);
        amount = amount + (100 * 1.20);
        amount = amount + ((units - 250) * 1.50);
    }

    // Adding surcharge (20%)
    surcharge = amount * 0.20;

    // Total bill calculation
    total_bill = amount + surcharge + 50; // 50 is fixed charge

    // Output
    printf("\n----- Electricity Bill -----\n");
    printf("Units Consumed : %d\n", units);
    printf("Energy Charge  : Rs. %.2f\n", amount);
    printf("Surcharge (20%%): Rs. %.2f\n", surcharge);
    printf("Fixed Charge   : Rs. 50.00\n");
    printf("-----------------------------\n");
    printf("Total Bill     : Rs. %.2f\n", total_bill);

    return 0;
}
