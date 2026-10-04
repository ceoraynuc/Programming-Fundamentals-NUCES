#include <stdio.h>

int main() {
    float prices[5];
    float total = 0.0, average, highest, lowest;

    printf("=== Shoe Shop Price Analysis ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Enter price of shoe pair %d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    highest = prices[0];
    lowest = prices[0];
    total = prices[0];

    for (int i = 1; i < 5; i++) {
        total += prices[i];
        if (prices[i] > highest) {
            highest = prices[i];
        }
        if (prices[i] < lowest) {
            lowest = prices[i];
        }
    }

    average = total / 5;

    printf("\n--- Price Analysis Results ---\n");
    printf("Highest Price: PKR %.2f\n", highest);
    printf("Lowest Price: PKR %.2f\n", lowest);
    printf("Total Price: PKR %.2f\n", total);
    printf("Average Price: PKR %.2f\n", average);

    return 0;
}
