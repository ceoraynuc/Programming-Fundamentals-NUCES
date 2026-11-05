#include <stdio.h>

int main() {
    float salary[6];
    int above = 0;

    for (int i = 0; i < 6; i++) {
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &salary[i]);
    }

    printf("\nEmployee salaries:\n");
    for (int i = 0; i < 6; i++) {
        printf("Employee %d: %.2f\n", i + 1, salary[i]);
        if (salary[i] > 50000) above++;
    }

    printf("Employees with salary greater than 50,000: %d\n", above);
    return 0;
}
