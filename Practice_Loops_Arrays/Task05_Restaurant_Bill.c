#include <stdio.h>

int main() {
    float price, total = 0.0, discount = 0.0, final_bill;
    int choice;

    printf("=== Restaurant Billing System ===\n\n");

    do {
        printf("Enter food item price: ");
        scanf("%f", &price);

        if (price > 0) {
            total += price;
        } else {
            printf("Invalid price! Skipping item.\n");
        }

        printf("Order another item? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);
        printf("\n");
    } while (choice == 1);

    if (total > 5000) {
        discount = total * 0.05; /* 5% discount */
    }

    final_bill = total - discount;

    printf("--- Restaurant Bill ---\n");
    printf("Total Bill: PKR %.2f\n", total);
    printf("Discount (5%%): PKR %.2f\n", discount);
    printf("Final Bill: PKR %.2f\n", final_bill);

    return 0;
}
