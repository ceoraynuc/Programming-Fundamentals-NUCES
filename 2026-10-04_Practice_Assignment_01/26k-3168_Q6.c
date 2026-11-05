/*
 * Name: Rayyan Ahmed
 * Roll Number: 26K-3168
 *
 * Problem 06: Find the Color
 *
 * The grid uses 5 colors (Green=0, Red=1, Blue=2, Orange=3, Gray=4)
 * arranged in a repeating cycle of 5 that shifts by one position every
 * row, alternating direction (forward on even rows, backward on odd
 * rows). This was derived from the given grid image:
 *   colorIndex = ((row/2) + (row%2==0 ? 1 : -1) * col) mod 5
 * where row and col are 0-indexed (row = (n-1)/6, col = (n-1)%6).
 *
 * Only arithmetic and the ternary operator are used (no if-else,
 * loops, or arrays), as required.
 */
#include <stdio.h>

int main() {
    int n1, n2;
    int row1, col1, row2, col2;
    int k1, k2, sign1, sign2;
    int raw1, raw2, idx1, idx2;
    const char *name1, *name2;

    printf("Enter first square number (1-36): ");
    scanf("%d", &n1);
    printf("Enter second square number (1-36): ");
    scanf("%d", &n2);

    row1 = (n1 - 1) / 6;
    col1 = (n1 - 1) % 6;
    row2 = (n2 - 1) / 6;
    col2 = (n2 - 1) % 6;

    k1 = row1 / 2;
    k2 = row2 / 2;

    sign1 = (row1 % 2 == 0) ? 1 : -1;
    sign2 = (row2 % 2 == 0) ? 1 : -1;

    raw1 = k1 + sign1 * col1;
    raw2 = k2 + sign2 * col2;

    /* Normalize to a proper 0-4 index (handles negative modulo in C) */
    idx1 = ((raw1 % 5) + 5) % 5;
    idx2 = ((raw2 % 5) + 5) % 5;

    name1 = (idx1 == 0) ? "Green" : (idx1 == 1) ? "Red" : (idx1 == 2) ? "Blue" : (idx1 == 3) ? "Orange" : "Gray";
    name2 = (idx2 == 0) ? "Green" : (idx2 == 1) ? "Red" : (idx2 == 2) ? "Blue" : (idx2 == 3) ? "Orange" : "Gray";

    printf("Square %d color: %s\n", n1, name1);
    printf("Square %d color: %s\n", n2, name2);
    printf("%s\n", (idx1 == idx2) ? "Same Color" : "Different Color");

    return 0;
}
