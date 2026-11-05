/*
 * Name: Rayyan Ahmed
 * Roll Number: 26K-3168
 *
 * Problem 05: Bill Calculation
 * Tiered water billing, computed using only arithmetic and the ternary
 * operator (no if-else, no loops), as required.
 */
#include <stdio.h>

int main() {
    int gallons;
    double tier1, tier2, tier3, tier4;
    double tier2Base, tier3Base, tier4Base;
    double bill, totalBill;

    printf("Enter number of gallons consumed: ");
    scanf("%d", &gallons);

    tier1 = (gallons < 100) ? gallons : 100;

    tier2Base = (gallons - 100 < 0) ? 0 : (gallons - 100);
    tier2     = (tier2Base < 250) ? tier2Base : 250;

    tier3Base = (gallons - 350 < 0) ? 0 : (gallons - 350);
    tier3     = (tier3Base < 250) ? tier3Base : 250;

    tier4Base = (gallons - 600 < 0) ? 0 : (gallons - 600);
    tier4     = tier4Base;

    bill = tier1 * 0.45 + tier2 * 0.85 + tier3 * 1.45 + tier4 * 2.60;
    totalBill = bill * 1.14; /* add 14% service charge */

    printf("Total Water Bill: $%.2f\n", totalBill);

    return 0;
}
