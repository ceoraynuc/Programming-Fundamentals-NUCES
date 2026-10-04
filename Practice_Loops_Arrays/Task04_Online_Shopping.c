#include <stdio.h>

int main() {
    float price, total = 0.0, discount = 0.0, final_amount;
    int choice;

    printf("=== Online Shopping Cart ===\n\n");

    do {
        printf("Enter item price: ");
        scanf("%f", &price);

        if (price > 0) {
            total += price;
        } else {
            printf("Invalid price! Skipping item.\n");
        }

        printf("Add another item? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);
        printf("\n");
    } while (choice == 1);

    if (total > 10000) {
        discount = total * 0.10; /* 10% discount */
    }

    final_amount = total - discount;

    printf("--- Shopping Bill ---\n");
    printf("Total Price: PKR %.2f\n", total);
    printf("Discount (10%%): PKR %.2f\n", discount);
    printf("Final Amount: PKR %.2f\n", final_amount);

    return 0;
}
