#include <stdio.h>

int main() {
    float prices[5];
    float total = 0.0, average;

    printf("=== Shoe Price Average Calculator ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Enter price of shoe %d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    for (int i = 0; i < 5; i++) {
        total += prices[i];
    }

    average = total / 5;

    printf("\n--- Summary ---\n");
    printf("Total Price: PKR %.2f\n", total);
    printf("Average Price: PKR %.2f\n", average);

    return 0;
}
