#include <stdio.h>

int checkAge(int age);
int checkSalary(float salary);
int checkRemaining(float salary, float payments);
float maxLoan(float salary, float payments);

int main() {
    int age;
    float salary, payments;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter monthly salary: ");
    scanf("%f", &salary);
    printf("Enter existing monthly loan payments: ");
    scanf("%f", &payments);

    int okAge = checkAge(age);
    int okSalary = checkSalary(salary);
    int okRemain = checkRemaining(salary, payments);

    if (okAge && okSalary && okRemain) {
        printf("\nEligible for a loan.\n");
        printf("Maximum loan amount: Rs. %.2f\n", maxLoan(salary, payments));
    } else {
        printf("\nNot eligible for a loan. Reason(s):\n");
        if (!okAge)    printf("- Age must be at least 21.\n");
        if (!okSalary) printf("- Monthly salary must be at least Rs. 50,000.\n");
        if (!okRemain) printf("- Less than 40%% of salary remains after existing payments.\n");
    }
    return 0;
}

int checkAge(int age) {
    return age >= 21;
}

int checkSalary(float salary) {
    return salary >= 50000;
}

int checkRemaining(float salary, float payments) {
    return (salary - payments) >= 0.40f * salary;
}

float maxLoan(float salary, float payments) {
    return 10 * (salary - payments);
}
