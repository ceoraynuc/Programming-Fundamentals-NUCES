#include <stdio.h>

int main() {
    int operation, account;

    printf("===== ATM MENU =====\n");
    printf("1. Balance Inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Cash Deposit\n");
    printf("4. PIN Change\n");
    printf("Select an operation: ");
    scanf("%d", &operation);

    switch (operation) {
        case 1:
            printf("\n1. Savings Account\n2. Current Account\nSelect account type: ");
            scanf("%d", &account);
            switch (account) {
                case 1: printf("Operation: Balance Inquiry | Account: Savings\n"); break;
                case 2: printf("Operation: Balance Inquiry | Account: Current\n"); break;
                default: printf("Invalid account choice.\n");
            }
            break;

        case 2:
            printf("\n1. Savings Account\n2. Current Account\nSelect account type: ");
            scanf("%d", &account);
            switch (account) {
                case 1: printf("Operation: Cash Withdrawal | Account: Savings\n"); break;
                case 2: printf("Operation: Cash Withdrawal | Account: Current\n"); break;
                default: printf("Invalid account choice.\n");
            }
            break;

        case 3:
            printf("\n1. Savings Account\n2. Current Account\nSelect account type: ");
            scanf("%d", &account);
            switch (account) {
                case 1: printf("Operation: Cash Deposit | Account: Savings\n"); break;
                case 2: printf("Operation: Cash Deposit | Account: Current\n"); break;
                default: printf("Invalid account choice.\n");
            }
            break;

        case 4:
            printf("\n1. Savings Account\n2. Current Account\nSelect account type: ");
            scanf("%d", &account);
            switch (account) {
                case 1: printf("Operation: PIN Change | Account: Savings\n"); break;
                case 2: printf("Operation: PIN Change | Account: Current\n"); break;
                default: printf("Invalid account choice.\n");
            }
            break;

        default:
            printf("Invalid operation choice.\n");
    }

    return 0;
}
