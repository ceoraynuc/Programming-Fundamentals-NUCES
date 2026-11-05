#include <stdio.h>

float baseCharge(float weight);
float distanceCharge(float km);
float memberDiscount(float total, char member);
void displayCharges(float base, float dist, float discount, float finalAmount);

int main() {
    float weight, km;
    char member;

    printf("Enter parcel weight (kg): ");
    scanf("%f", &weight);
    printf("Enter delivery distance (km): ");
    scanf("%f", &km);
    printf("Is the customer a member? (Y/N): ");
    scanf(" %c", &member);

    float base = baseCharge(weight);
    float dist = distanceCharge(km);
    float discount = memberDiscount(base + dist, member);

    displayCharges(base, dist, discount, base + dist - discount);
    return 0;
}

float baseCharge(float weight) {
    if (weight <= 2) return 200;
    if (weight <= 5) return 400;
    return 700;
}

/* Rs. 20 per km is charged only on the distance beyond 10 km */
float distanceCharge(float km) {
    return (km > 10) ? (km - 10) * 20 : 0;
}

float memberDiscount(float total, char member) {
    if ((member == 'Y' || member == 'y') && total > 1000) {
        return total * 0.10f;
    }
    return 0;
}

void displayCharges(float base, float dist, float discount, float finalAmount) {
    printf("\n--- Delivery Charges ---\n");
    printf("Base charges     : Rs. %.2f\n", base);
    printf("Distance charges : Rs. %.2f\n", dist);
    printf("Discount         : Rs. %.2f\n", discount);
    printf("Final amount     : Rs. %.2f\n", finalAmount);
}
