#include <stdio.h>

int main() {
    float balance = 50000.0;
    float amount;
    int withdrawals = 0;

    printf("=== ATM Withdrawal System ===\n");
    printf("Initial Balance: PKR 50,000.00\n\n");

    while (1) {
        printf("Enter withdrawal amount (0 or negative to exit): ");
        scanf("%f", &amount);

        if (amount <= 0) {
            break;
        }

        if (amount > balance) {
            printf("Insufficient balance! Current balance: %.2f\n\n", balance);
        } else {
            balance -= amount;
            withdrawals++;
            printf("Withdrawal successful! Remaining balance: %.2f\n\n", balance);
        }
    }

    printf("\n--- Transaction Summary ---\n");
    printf("Total Withdrawals: %d\n", withdrawals);
    printf("Remaining Balance: PKR %.2f\n", balance);

    return 0;
}
