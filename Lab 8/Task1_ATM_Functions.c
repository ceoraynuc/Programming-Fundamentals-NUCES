#include <stdio.h>

void welcome(void);
void displayAmount(float amount);
float getWithdrawalLimit(void);
float calculateBalance(float balance, float amount);
int checkWithdrawal(float balance, float amount, float limit);

int main() {
    float balance = 100000, amount;
    float limit = getWithdrawalLimit();

    welcome();
    printf("Current balance: Rs. %.2f\n", balance);
    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);

    if (checkWithdrawal(balance, amount, limit)) {
        balance = calculateBalance(balance, amount);
        printf("Withdrawal successful.\n");
        displayAmount(amount);
        printf("Remaining balance: Rs. %.2f\n", balance);
    } else {
        printf("Withdrawal invalid. Amount must be above 0, within the balance and within Rs. %.2f.\n", limit);
    }
    return 0;
}

void welcome(void) {
    printf("===== Welcome to the ATM =====\n");
}

void displayAmount(float amount) {
    printf("Amount withdrawn: Rs. %.2f\n", amount);
}

float getWithdrawalLimit(void) {
    return 50000;
}

float calculateBalance(float balance, float amount) {
    return balance - amount;
}

int checkWithdrawal(float balance, float amount, float limit) {
    return (amount > 0 && amount <= balance && amount <= limit);
}
