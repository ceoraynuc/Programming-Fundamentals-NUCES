#include <stdio.h>

int getNumber(void);
int isEven(int n);
int isPalindrome(int n);
int isPrime(int n);
void displayResults(int n);

int main() {
    int n = getNumber();
    displayResults(n);
    return 0;
}

int getNumber(void) {
    int n;
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n <= 0);
    return n;
}

int isEven(int n) {
    return n % 2 == 0;
}

int isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void displayResults(int n) {
    printf("\nResults for %d:\n", n);
    printf("Even/Odd   : %s\n", isEven(n) ? "Even" : "Odd");
    printf("Palindrome : %s\n", isPalindrome(n) ? "Yes" : "No");
    printf("Prime      : %s\n", isPrime(n) ? "Yes" : "No");
}
