/*
 * Name: Rayyan Ahmed
 * Roll Number: 26K-3168
 *
 * Problem 01: Magic Number
 * Checks whether month * day == year (two-digit year).
 * Only arithmetic and the ternary operator are used, as required.
 */
#include <stdio.h>

int main() {
    int month, day, year;

    printf("Enter month (numeric): ");
    scanf("%d", &month);
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter two-digit year: ");
    scanf("%d", &year);

    /* Ternary operator used in place of if-else */
    printf("%s\n", (month * day == year) ? "The date is magic!" : "The date is not magic.");

    return 0;
}
