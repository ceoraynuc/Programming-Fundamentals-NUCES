#include <stdio.h>

int main() {
    char item[50];
    float price, total = 0;
    int count = 0, again;

    do {
        printf("Enter food item name: ");
        scanf(" %49[^\n]", item);
        printf("Enter price of %s: ", item);
        scanf("%f", &price);
        total += price;
        count++;
        printf("Order another item? (1 = Yes, 0 = No): ");
        scanf("%d", &again);
    } while (again == 1);

    printf("\nTotal bill: %.2f\n", total);
    printf("Number of items ordered: %d\n", count);
    return 0;
}
