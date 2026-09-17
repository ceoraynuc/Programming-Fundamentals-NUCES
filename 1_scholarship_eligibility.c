/*
 Task 1: Scholarship Eligibility
 A student qualifies for scholarship if:
   - marks >= 80  OR
   - family income < 50000
*/
#include <stdio.h>

int main() {
    float marks;
    float income;

    printf("Enter marks percentage: ");
    scanf("%f", &marks);

    printf("Enter family income (Rs.): ");
    scanf("%f", &income);

    if (marks >= 80 || income < 50000) {
        printf("Congratulations! You qualify for the scholarship.\n");
    } else {
        printf("Sorry, you do not qualify for the scholarship.\n");
    }

    return 0;
}
