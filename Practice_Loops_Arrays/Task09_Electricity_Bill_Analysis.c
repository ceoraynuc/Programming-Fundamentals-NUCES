#include <stdio.h>

int main() {
    float units[5];
    float total_units = 0.0, total_amount = 0.0;
    float highest_units, lowest_units;

    printf("=== Electricity Bill Analysis (5 Households) ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Enter units consumed by household %d: ", i + 1);
        scanf("%f", &units[i]);
    }

    highest_units = units[0];
    lowest_units = units[0];

    for (int i = 0; i < 5; i++) {
        total_units += units[i];

        if (units[i] > highest_units) {
            highest_units = units[i];
        }
        if (units[i] < lowest_units) {
            lowest_units = units[i];
        }

        /* Calculate bill for individual household */
        float base_bill = units[i] * 10;
        float surcharge = (units[i] > 500) ? (base_bill * 0.05) : 0.0;
        total_amount += (base_bill + surcharge);
    }

    printf("\n--- Analysis Summary ---\n");
    printf("Total Units Consumed: %.2f\n", total_units);
    printf("Highest Units Consumed: %.2f\n", highest_units);
    printf("Lowest Units Consumed: %.2f\n", lowest_units);
    printf("Total Amount Collected: PKR %.2f\n", total_amount);

    return 0;
}
