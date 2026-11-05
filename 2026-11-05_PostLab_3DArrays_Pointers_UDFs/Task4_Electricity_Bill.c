#include <stdio.h>

int getUnits(void);
char getCategory(void);
float calculateBill(int units, char category);
float calculateSurcharge(float bill);
void displayBill(int units, float bill, float surcharge, float finalAmount);

int main() {
    int units = getUnits();
    char category = getCategory();
    float bill = calculateBill(units, category);
    float surcharge = calculateSurcharge(bill);
    displayBill(units, bill, surcharge, bill + surcharge);
    return 0;
}

int getUnits(void) {
    int units;
    do {
        printf("Enter units consumed: ");
        scanf("%d", &units);
    } while (units < 0);
    return units;
}

char getCategory(void) {
    char c;
    do {
        printf("Enter category (D = Domestic, C = Commercial): ");
        scanf(" %c", &c);
        if (c == 'd') c = 'D';
        if (c == 'c') c = 'C';
    } while (c != 'D' && c != 'C');
    return c;
}

float calculateBill(int units, char category) {
    if (category == 'C') {
        return units * 25.0f;
    }
    if (units <= 100) {
        return units * 15.0f;
    }
    return 100 * 15.0f + (units - 100) * 20.0f;
}

float calculateSurcharge(float bill) {
    return (bill > 5000) ? bill * 0.05f : 0.0f;
}

void displayBill(int units, float bill, float surcharge, float finalAmount) {
    printf("\n--- Electricity Bill ---\n");
    printf("Units consumed : %d\n", units);
    printf("Bill amount    : Rs. %.2f\n", bill);
    printf("Surcharge      : Rs. %.2f\n", surcharge);
    printf("Final payable  : Rs. %.2f\n", finalAmount);
}
