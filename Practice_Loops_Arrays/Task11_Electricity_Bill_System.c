#include <stdio.h>

int main() {
    float units[5];
    float bills[5];
    float total_collected = 0.0;

    printf("=== Household Electricity Billing System ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Enter units consumed for household %d: ", i + 1);
        scanf("%f", &units[i]);
    }

    for (int i = 0; i < 5; i++) {
        float base_bill = units[i] * 10;
        float surcharge = (units[i] > 500) ? (base_bill * 0.05) : 0.0;
        bills[i] = base_bill + surcharge;
        total_collected += bills[i];
    }

    printf("\n--- Individual Bills ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Household %d Bill: PKR %.2f\n", i + 1, bills[i]);
    }

    printf("\n--------------------------------\n");
    printf("Total Amount Collected: PKR %.2f\n", total_collected);

    return 0;
}
