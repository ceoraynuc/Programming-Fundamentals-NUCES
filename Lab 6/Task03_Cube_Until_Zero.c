#include <stdio.h>

int main() {
    long long n;
    printf("Enter a number (0 to stop): ");
    scanf("%lld", &n);
    while (n != 0) {
        printf("Cube of %lld = %lld\n", n, n * n * n);
        printf("Enter a number (0 to stop): ");
        scanf("%lld", &n);
    }
    printf("Stopped.\n");
    return 0;
}
