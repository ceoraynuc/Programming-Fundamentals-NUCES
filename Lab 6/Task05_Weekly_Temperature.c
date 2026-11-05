#include <stdio.h>

int main() {
    float temp, total = 0;
    int above = 0;

    for (int day = 1; day <= 7; day++) {
        printf("Enter temperature for day %d: ", day);
        scanf("%f", &temp);
        total += temp;
        if (temp > 100) above++;
    }

    printf("\nTotal temperature: %.2f\n", total);
    printf("Days with temperature greater than 100: %d\n", above);
    return 0;
}
