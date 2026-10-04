#include <stdio.h>

int main() {
    float recharge, total = 0.0;
    int attempts = 0;

    printf("=== Mobile Recharge System ===\n\n");

    while (1) {
        printf("Enter recharge amount (0 or negative to stop): ");
        scanf("%f", &recharge);

        if (recharge <= 0) {
            break;
        }

        total += recharge;
        attempts++;

        if (total > 5000) {
            printf("\nRecharge Limit Reached!\n");
            break;
        }
    }

    printf("\n--- Recharge Summary ---\n");
    printf("Total Recharge Attempts: %d\n", attempts);
    printf("Total Recharged Amount: PKR %.2f\n", total);

    return 0;
}
