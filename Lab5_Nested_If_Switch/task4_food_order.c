#include <stdio.h>

int main() {
    int restaurantOpen, itemAvailable, balanceSufficient;

    printf("Is the restaurant open? (1 = Yes, 0 = No): ");
    scanf("%d", &restaurantOpen);
    printf("Is the item available? (1 = Yes, 0 = No): ");
    scanf("%d", &itemAvailable);
    printf("Is your balance sufficient? (1 = Yes, 0 = No): ");
    scanf("%d", &balanceSufficient);

    if (restaurantOpen == 1) {
        if (itemAvailable == 1) {
            if (balanceSufficient == 1) {
                printf("Order placed successfully.\n");
            } else {
                printf("Order failed: insufficient balance.\n");
            }
        } else {
            printf("Order failed: item is not available.\n");
        }
    } else {
        printf("Order failed: restaurant is closed.\n");
    }

    return 0;
}
