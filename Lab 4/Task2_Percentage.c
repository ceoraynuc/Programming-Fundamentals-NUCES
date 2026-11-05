#include <stdio.h>

int main() {
    float obtained, total;
    printf("Enter obtained marks: ");
    scanf("%f", &obtained);
    printf("Enter total marks: ");
    scanf("%f", &total);
    if (total <= 0) {
        printf("Total marks must be greater than 0.\n");
        return 1;
    }
    printf("Percentage = %.2f%%\n", obtained / total * 100);
    return 0;
}
