/*
 * Name: Rayyan Ahmed
 * Roll Number: 26K-3168
 *
 * Problem 03: Quantum Key Generator
 * 32-bit input: bits 31-24 = Constant, 23-16 = Gate3, 15-8 = Gate2, 7-0 = Gate1
 * KEY = GATE1 ^ GATE2 ^ GATE3 ^ CONSTANT  (derived by solving A^B^C^K=D for K)
 * Only bitwise operators are used (no arithmetic, no ternary), as required.
 */
#include <stdio.h>

int main() {
    unsigned int num;
    unsigned int constantGate, gate3, gate2, gate1, key;

    printf("Enter a 32-bit positive integer: ");
    scanf("%u", &num);

    constantGate = (num >> 24) & 0xFF;
    gate3        = (num >> 16) & 0xFF;
    gate2        = (num >> 8)  & 0xFF;
    gate1        =  num        & 0xFF;

    key = gate1 ^ gate2 ^ gate3 ^ constantGate;

    printf("Quantum Key (binary): %d%d%d%d%d%d%d%d\n",
           (key >> 7) & 1, (key >> 6) & 1, (key >> 5) & 1, (key >> 4) & 1,
           (key >> 3) & 1, (key >> 2) & 1, (key >> 1) & 1,  key       & 1);

    return 0;
}
