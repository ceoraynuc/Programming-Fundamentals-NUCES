#include <stdio.h>

int main() {
    float bill;
    int isMember;

    printf("Enter total bill amount: ");
    scanf("%f", &bill);
    printf("Enter membership status (1 = Member, 0 = Non-member): ");
    scanf("%d", &isMember);

    float discountPercent = 0;

    if (bill < 500) {
        discountPercent = 0;
    } else if (bill < 2000) {
        discountPercent = isMember ? 10 : 5;
    } else {
        discountPercent = isMember ? 15 : 8;
    }

    float discountAmount = bill * discountPercent / 100.0f;
    float finalAmount = bill - discountAmount;

    printf("Discount Amount: Rs %.2f\n", discountAmount);
    printf("Final Payable Amount: Rs %.2f\n", finalAmount);

    return 0;
}
