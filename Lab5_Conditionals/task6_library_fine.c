#include <stdio.h>

int main() {
    int overdueDays, bookType, isPriority;

    printf("Enter overdue days: ");
    scanf("%d", &overdueDays);
    printf("Enter book type (1=Regular, 2=Reference, 3=Rare): ");
    scanf("%d", &bookType);
    printf("Is priority member? (1=Yes, 0=No): ");
    scanf("%d", &isPriority);

    float fine = 0;
    int banned = 0;

    if (bookType == 1) {
        if (overdueDays <= 7) {
            fine = overdueDays * 5.0f;
        } else {
            fine = 7 * 5.0f + (overdueDays - 7) * 10.0f;
        }
        if (isPriority) {
            fine = fine * 0.80f;
        }
    } else if (bookType == 2) {
        fine = overdueDays * 15.0f;
        if (isPriority) {
            fine = fine * 0.80f;
        }
    } else if (bookType == 3) {
        fine = overdueDays * 30.0f;
        /* No discount for Rare books, even for priority members */
        if (overdueDays > 10) {
            banned = 1;
        }
    }

    printf("Fine: Rs %.2f\n", fine);
    if (banned) {
        printf("Banned from Borrowing\n");
    }

    return 0;
}
