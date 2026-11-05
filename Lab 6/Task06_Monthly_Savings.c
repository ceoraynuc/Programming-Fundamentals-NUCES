#include <stdio.h>

int main() {
    float amount, total = 0;
    int deposits = 0;

    printf("Enter amount saved (0 or negative to stop): ");
    scanf("%f", &amount);
    while (amount > 0) {
        total += amount;
        deposits++;
        printf("Enter amount saved (0 or negative to stop): ");
        scanf("%f", &amount);
    }

    printf("\nTotal savings: %.2f\n", total);
    printf("Number of deposits: %d\n", deposits);
    return 0;
}
