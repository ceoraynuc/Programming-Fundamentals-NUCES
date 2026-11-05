/*
 * Name: Rayyan Ahmed
 * Roll Number: 26K-3168
 *
 * Problem 02: Credit Card Loan
 * N = -(1/c) * ln(1 + (b/p)*(1-(1+i)^c)) / ln(1+i)
 * Uses only arithmetic operators and library math functions (pow, log).
 */
#include <stdio.h>
#include <math.h>

int main() {
    int c, b, p;
    double i, N;

    printf("Enter constant factor c (e.g. 30): ");
    scanf("%d", &c);
    printf("Enter balance b: ");
    scanf("%d", &b);
    printf("Enter monthly payment p: ");
    scanf("%d", &p);
    printf("Enter daily interest rate i (yearly rate / 365): ");
    scanf("%lf", &i);

    N = -(1.0 / c) * ( log(1 + ((double)b / p) * (1 - pow(1 + i, c))) / log(1 + i) );

    printf("Number of months to pay off the loan: %.2f\n", N);

    return 0;
}
