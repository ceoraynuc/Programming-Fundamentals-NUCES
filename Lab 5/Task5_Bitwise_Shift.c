#include <stdio.h>

/* Prints the lowest 8 bits of n in binary */
void printBinary(int n) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}

int main() {
    int A = 8;
    int left = A << 2;
    int right = A >> 1;

    printf("A = %d, binary = ", A);
    printBinary(A);
    printf("\n\nA << 2:\n  before: ");
    printBinary(A);
    printf("\n  after : ");
    printBinary(left);
    printf("\n  decimal result = %d\n", left);

    printf("\nA >> 1:\n  before: ");
    printBinary(A);
    printf("\n  after : ");
    printBinary(right);
    printf("\n  decimal result = %d\n", right);
    return 0;
}
