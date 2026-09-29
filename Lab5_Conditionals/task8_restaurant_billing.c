#include <stdio.h>

int main() {
    int mealCategory, customerType;
    float bill;

    printf("Enter meal category (1=Fast Food, 2=Desi Food, 3=Chinese): ");
    scanf("%d", &mealCategory);
    printf("Enter bill amount: ");
    scanf("%f", &bill);
    printf("Enter customer type (1=Student, 2=Regular): ");
    scanf("%d", &customerType);

    if ((mealCategory < 1 || mealCategory > 3) || (customerType != 1 && customerType != 2)) {
        printf("Invalid Selection\n");
        return 0;
    }

    float serviceChargePercent = 0;

    switch (mealCategory) {
        case 1: serviceChargePercent = 5; break;
        case 2: serviceChargePercent = 8; break;
        case 3: serviceChargePercent = 10; break;
    }

    float serviceCharge = bill * serviceChargePercent / 100.0f;
    float discountPercent = 0;

    if (bill >= 1000) {
        if (customerType == 1) {
            discountPercent = 15;
        } else {
            discountPercent = 10;
        }
    } else {
        if (customerType == 1) {
            discountPercent = 5;
        } else {
            discountPercent = 0;
        }
    }

    float discount = bill * discountPercent / 100.0f;
    float finalAmount = bill + serviceCharge - discount;

    printf("Service Charge: Rs %.2f\n", serviceCharge);
    printf("Discount: Rs %.2f\n", discount);
    printf("Final Payable Amount: Rs %.2f\n", finalAmount);

    return 0;
}
