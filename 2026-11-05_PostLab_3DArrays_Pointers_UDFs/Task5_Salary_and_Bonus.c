#include <stdio.h>

float getSalary(void);
int getYears(void);
float calculateBonus(float salary, int years);
float calculateTax(float amount);
void displaySalary(float basic, float bonus, float tax, float finalSalary);

int main() {
    float basic = getSalary();
    int years = getYears();
    float bonus = calculateBonus(basic, years);
    float tax = calculateTax(basic + bonus);
    displaySalary(basic, bonus, tax, basic + bonus - tax);
    return 0;
}

float getSalary(void) {
    float s;
    do {
        printf("Enter basic salary: ");
        scanf("%f", &s);
    } while (s < 0);
    return s;
}

int getYears(void) {
    int y;
    do {
        printf("Enter years of service: ");
        scanf("%d", &y);
    } while (y < 0);
    return y;
}

float calculateBonus(float salary, int years) {
    if (years > 5) return salary * 0.15f;
    if (years >= 3) return salary * 0.10f;
    return salary * 0.05f;
}

float calculateTax(float amount) {
    return (amount > 100000) ? amount * 0.05f : 0.0f;
}

void displaySalary(float basic, float bonus, float tax, float finalSalary) {
    printf("\n--- Salary Details ---\n");
    printf("Basic salary : Rs. %.2f\n", basic);
    printf("Bonus        : Rs. %.2f\n", bonus);
    printf("Tax          : Rs. %.2f\n", tax);
    printf("Final salary : Rs. %.2f\n", finalSalary);
}
