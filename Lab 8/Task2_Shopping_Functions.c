#include <stdio.h>

#define DISCOUNT_LIMIT 5000
#define DISCOUNT_RATE 0.10f

void welcome(void);
void showMenu(void);
float getPrice(int product);
float calculateItemPrice(float price, int qty);
float calculateSubtotal(float itemTotals[], int n);
float calculateDiscount(float subtotal);
float calculateFinalBill(float subtotal, float discount);
void displayReceipt(int products[], int qtys[], float itemTotals[], int n, float subtotal, float discount, float finalBill);
int askContinue(void);

int main() {
    int products[50], qtys[50], n = 0;
    float itemTotals[50];

    welcome();
    do {
        int p, q;
        showMenu();
        printf("Select product (1-5): ");
        scanf("%d", &p);
        if (getPrice(p) == 0) {
            printf("Invalid product.\n");
            continue;
        }
        printf("Enter quantity: ");
        scanf("%d", &q);
        if (q <= 0) {
            printf("Quantity must be positive.\n");
            continue;
        }
        products[n] = p;
        qtys[n] = q;
        itemTotals[n] = calculateItemPrice(getPrice(p), q);
        n++;
    } while (n < 50 && askContinue());

    float subtotal = calculateSubtotal(itemTotals, n);
    float discount = calculateDiscount(subtotal);
    float finalBill = calculateFinalBill(subtotal, discount);
    displayReceipt(products, qtys, itemTotals, n, subtotal, discount, finalBill);
    return 0;
}

void welcome(void) {
    printf("===== Welcome to the Shop =====\n");
}

void showMenu(void) {
    printf("\n1. Rice (1kg)   Rs. 300\n");
    printf("2. Milk (1L)    Rs. 220\n");
    printf("3. Bread        Rs. 150\n");
    printf("4. Cooking Oil  Rs. 650\n");
    printf("5. Sugar (1kg)  Rs. 180\n");
}

float getPrice(int product) {
    switch (product) {
        case 1: return 300;
        case 2: return 220;
        case 3: return 150;
        case 4: return 650;
        case 5: return 180;
        default: return 0;
    }
}

float calculateItemPrice(float price, int qty) {
    return price * qty;
}

float calculateSubtotal(float itemTotals[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) sum += itemTotals[i];
    return sum;
}

float calculateDiscount(float subtotal) {
    return (subtotal >= DISCOUNT_LIMIT) ? subtotal * DISCOUNT_RATE : 0;
}

float calculateFinalBill(float subtotal, float discount) {
    return subtotal - discount;
}

void displayReceipt(int products[], int qtys[], float itemTotals[], int n, float subtotal, float discount, float finalBill) {
    printf("\n========== RECEIPT ==========\n");
    printf("%-8s %-5s %-10s %-10s\n", "Product", "Qty", "Price", "Total");
    for (int i = 0; i < n; i++) {
        printf("%-8d %-5d %-10.2f %-10.2f\n", products[i], qtys[i], getPrice(products[i]), itemTotals[i]);
    }
    printf("-----------------------------\n");
    printf("Subtotal : Rs. %.2f\n", subtotal);
    printf("Discount : Rs. %.2f\n", discount);
    printf("Payable  : Rs. %.2f\n", finalBill);
}

int askContinue(void) {
    int c;
    printf("Continue shopping? (1 = Yes, 0 = No): ");
    scanf("%d", &c);
    return c == 1;
}
