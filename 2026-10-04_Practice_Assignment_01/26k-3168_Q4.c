/*
 * Name: Rayyan Ahmed
 * Roll Number: 26K-3168
 *
 * Problem 04: Binary to Grey Code Converter
 * Grey code formula: gray = binary ^ (binary >> 1)
 * (keeps the most-left bit, then XORs each bit with its left neighbour)
 * Only bitwise operators are used, as required.
 */
#include <stdio.h>

int main() {
    unsigned short binary, gray;

    printf("Enter a non-zero 16-bit integer: ");
    scanf("%hu", &binary);

    gray = binary ^ (binary >> 1);

    printf("Grey Code (binary): "
           "%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",
           (gray >> 15) & 1, (gray >> 14) & 1, (gray >> 13) & 1, (gray >> 12) & 1,
           (gray >> 11) & 1, (gray >> 10) & 1, (gray >> 9)  & 1, (gray >> 8)  & 1,
           (gray >> 7)  & 1, (gray >> 6)  & 1, (gray >> 5)  & 1, (gray >> 4)  & 1,
           (gray >> 3)  & 1, (gray >> 2)  & 1, (gray >> 1)  & 1,  gray        & 1);

    return 0;
}
