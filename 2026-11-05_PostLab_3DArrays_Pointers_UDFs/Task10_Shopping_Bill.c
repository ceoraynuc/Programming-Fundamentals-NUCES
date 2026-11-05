#include <stdio.h>

float calculateSubtotal(float price, int qty);
float bulkDiscount(float subtotal);
float memberDiscount(float subtotal, char member);
float paymentFee(float amount, char card);
void displayBill(float subtotal, float d1, float d2, float fee, float finalAmount);

int main() {
    float price;
    int qty;
    char member, card;

    printf("Enter product price: ");
    scanf("%f", &price);
    printf("Enter quantity: ");
    scanf("%d", &qty);
    printf("Is the customer a member? (Y/N): ");
    scanf(" %c", &member);
    printf("Paying by card? (Y/N): ");
    scanf(" %c", &card);

    float subtotal = calculateSubtotal(price, qty);
    float d1 = bulkDiscount(subtotal);
    float d2 = memberDiscount(subtotal, member);
    float afterDiscount = subtotal - d1 - d2;
    float fee = paymentFee(afterDiscount, card);

    displayBill(subtotal, d1, d2, fee, afterDiscount + fee);
    return 0;
}

float calculateSubtotal(float price, int qty) {
    return price * qty;
}

float bulkDiscount(float subtotal) {
    return (subtotal > 5000) ? subtotal * 0.10f : 0;
}

float memberDiscount(float subtotal, char member) {
    return (member == 'Y' || member == 'y') ? subtotal * 0.05f : 0;
}

float paymentFee(float amount, char card) {
    return (card == 'Y' || card == 'y') ? amount * 0.02f : 0;
}

void displayBill(float subtotal, float d1, float d2, float fee, float finalAmount) {
    printf("\n--- Shopping Bill ---\n");
    printf("Subtotal          : Rs. %.2f\n", subtotal);
    printf("Bulk discount 10%% : Rs. %.2f\n", d1);
    printf("Member discount 5%%: Rs. %.2f\n", d2);
    printf("Card fee 2%%       : Rs. %.2f\n", fee);
    printf("Final payable     : Rs. %.2f\n", finalAmount);
}
