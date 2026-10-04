#include <stdio.h>

int main() {
    const int CORRECT_PIN = 1234;
    int entered_pin;
    int max_attempts = 3;
    int attempts = 0;

    printf("=== System Login ===\n\n");

    while (attempts < max_attempts) {
        printf("Enter PIN: ");
        scanf("%d", &entered_pin);

        if (entered_pin == CORRECT_PIN) {
            printf("Login Successful\n");
            return 0;
        } else {
            attempts++;
            int remaining = max_attempts - attempts;
            if (remaining > 0) {
                printf("Incorrect PIN! Remaining attempts: %d\n\n", remaining);
            }
        }
    }

    printf("Account Locked\n");

    return 0;
}
