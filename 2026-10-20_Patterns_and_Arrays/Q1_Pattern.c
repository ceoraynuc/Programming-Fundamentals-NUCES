#include <stdio.h>

int main() {
    /* Row i prints i values. Every 4th value in a row is 0, all others are 1 */
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= i; j++) {
            if (j % 4 == 0) {
                printf("0 ");
            } else {
                printf("1 ");
            }
        }
        printf("\n");
    }

    return 0;
}
