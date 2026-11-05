#include <stdio.h>

int main() {
    /* Odd position: cube, even position: square */
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 1)
                printf("%d ", j * j * j);
            else
                printf("%d ", j * j);
        }
        printf("\n");
    }
    return 0;
}
