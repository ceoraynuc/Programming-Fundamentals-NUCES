#include <stdio.h>

int main() {
    float mark, total = 0.0;
    int count = 0;

    printf("=== Student Marks Calculation ===\n");
    printf("Enter student marks (0 - 100). Enter -1 to finish.\n\n");

    while (1) {
        printf("Enter mark for student %d: ", count + 1);
        scanf("%f", &mark);

        if (mark == -1) {
            break;
        }

        if (mark >= 0 && mark <= 100) {
            total += mark;
            count++;
        } else {
            printf("Invalid input! Please enter a mark between 0 and 100.\n");
        }
    }

    printf("\n--- Marks Summary ---\n");
    printf("Total Students: %d\n", count);
    printf("Total Marks: %.2f\n", total);
    if (count > 0) {
        printf("Average Marks: %.2f\n", total / count);
    } else {
        printf("No valid marks entered.\n");
    }

    return 0;
}
