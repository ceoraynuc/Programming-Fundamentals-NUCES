#include <stdio.h>

int main() {
    int x, y;
    int *p1 = &x, *p2 = &y;

    printf("Enter first integer: ");
    scanf("%d", p1);
    printf("Enter second integer: ");
    scanf("%d", p2);

    long long sum = (long long)*p1 + *p2;
    long long product = (long long)*p1 * *p2;

    printf("Sum = %lld\n", sum);
    printf("Product = %lld\n", product);

    return 0;
}
