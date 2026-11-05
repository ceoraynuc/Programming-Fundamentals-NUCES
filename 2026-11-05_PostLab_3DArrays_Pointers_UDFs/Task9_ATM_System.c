#include <stdio.h>

void showMenu(void);
void checkBalance(float balance);
float deposit(float balance);
float withdraw(float balance);

int main() {
    float balance = 20000;
    int choice;

    do {
        showMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1: checkBalance(balance); break;
            case 2: balance = deposit(balance); break;
            case 3: balance = withdraw(balance); break;
            case 4: printf("Thank you for using the ATM.\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void showMenu(void) {
    printf("\n===== ATM MENU =====\n");
    printf("1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
    printf("Enter choice: ");
}

void checkBalance(float balance) {
    printf("Current balance: Rs. %.2f\n", balance);
}

float deposit(float balance) {
    float amount;
    printf("Enter deposit amount: ");
    scanf("%f", &amount);
    if (amount <= 0) {
        printf("Amount must be positive.\n");
        return balance;
    }
    balance += amount;
    printf("Deposit successful. ");
    checkBalance(balance);
    return balance;
}

float withdraw(float balance) {
    float amount;
    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);
    if (amount <= 0) {
        printf("Amount must be positive.\n");
    } else if (amount > 10000) {
        printf("Cannot withdraw more than Rs. 10,000 per transaction.\n");
    } else if (amount > balance) {
        printf("Insufficient balance.\n");
    } else {
        balance -= amount;
        printf("Withdrawal successful. ");
        checkBalance(balance);
        if (balance < 5000) {
            printf("WARNING: Low balance (below Rs. 5,000)!\n");
        }
    }
    return balance;
}
