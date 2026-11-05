#include <stdio.h>

int main() {
    /* Row i prints i values alternating 1 0 1 0 ... starting with 1 */
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 1) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
