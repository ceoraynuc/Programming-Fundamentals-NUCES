#include <stdio.h>

int main() {
    int capacity, currentLevel;
    float fillRate;

    printf("Enter tank capacity (liters): ");
    scanf("%d", &capacity);
    printf("Enter current water level (liters): ");
    scanf("%d", &currentLevel);
    printf("Enter motor fill rate (liters/min): ");
    scanf("%f", &fillRate);

    if (currentLevel >= capacity) {
        printf("Tank Already Full\n");
        return 0;
    }

    int remaining = capacity - currentLevel;
    float exactTime = remaining / fillRate;

    /* Round up to next whole minute using casting only */
    int roundedMinutes = (int)exactTime;
    if (exactTime > (float)roundedMinutes) {
        roundedMinutes = roundedMinutes + 1;
    }

    float cost = roundedMinutes * 3.50f;

    printf("Required Time: %.2f minutes\n", (float)roundedMinutes);
    printf("Billed Electricity Cost: Rs %.2f\n", cost);

    return 0;
}
