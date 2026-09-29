#include <stdio.h>

int main() {
    float amount;
    int network, isWeekend;

    printf("Enter load amount: ");
    scanf("%f", &amount);
    printf("Enter network code (1=Jazz, 2=Telenor, 3=Ufone): ");
    scanf("%d", &network);
    printf("Is it weekend? (1=Yes, 0=No): ");
    scanf("%d", &isWeekend);

    float bonusPercent = 0;

    if (amount < 100) {
        bonusPercent = 0;
    } else if (amount <= 499) {
        if (isWeekend) {
            if (network == 3) {
                bonusPercent = 5;
            } else {
                bonusPercent = 10;
            }
        } else {
            bonusPercent = 5;
        }
    } else {
        /* amount >= 500 */
        if (network == 1 || isWeekend) {
            bonusPercent = 20;
        } else {
            bonusPercent = 12;
        }
    }

    float bonus = amount * bonusPercent / 100.0f;
    float finalBalance = amount + bonus;

    printf("Bonus: Rs %.2f\n", bonus);
    printf("Final Loaded Balance: Rs %.2f\n", finalBalance);

    return 0;
}
