#include <stdio.h>

int main() {
    /* data[i][0] = quantity, data[i][1] = unit price */
    float data[5][2];
    float total[5], grand = 0;

    for (int i = 0; i < 5; i++) {
        printf("Product %d quantity: ", i + 1);
        scanf("%f", &data[i][0]);
        printf("Product %d unit price: ", i + 1);
        scanf("%f", &data[i][1]);
    }

    for (int i = 0; i < 5; i++) {
        total[i] = data[i][0] * data[i][1];
        grand += total[i];
    }

    printf("\n%-10s %10s %12s %12s\n", "Product", "Quantity", "Unit Price", "Total");
    for (int i = 0; i < 5; i++) {
        printf("%-10d %10.0f %12.2f %12.2f\n", i + 1, data[i][0], data[i][1], total[i]);
    }
    printf("\nGrand total: %.2f\n", grand);
    return 0;
}
