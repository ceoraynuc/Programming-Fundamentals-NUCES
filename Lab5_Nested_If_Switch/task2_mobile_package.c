#include <stdio.h>

int main() {
    int balance;

    printf("Enter your balance: ");
    scanf("%d", &balance);

    if (balance < 500) {
        printf("Low Balance\n");
    } else if (balance <= 2000) {
        printf("Sufficient Balance\n");
    } else {
        printf("Premium Balance\n");
    }

    return 0;
}
