#include <stdio.h>

int main() {
    float prices[5];
    float total = 0.0, discount = 0.0, final_amount;

    printf("=== Shopping Cart (5 Products) ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Enter price for product %d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    for (int i = 0; i < 5; i++) {
        total += prices[i];
    }

    if (total > 10000) {
        discount = total * 0.10; /* 10% discount */
    }

    final_amount = total - discount;

    printf("\n--- Bill Details ---\n");
    printf("Original Total: PKR %.2f\n", total);
    printf("Discount (10%%): PKR %.2f\n", discount);
    printf("Final Amount: PKR %.2f\n", final_amount);

    return 0;
}
