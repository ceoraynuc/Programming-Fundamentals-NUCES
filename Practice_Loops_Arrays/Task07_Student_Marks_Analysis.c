#include <stdio.h>

int main() {
    float marks[5];
    float total = 0.0, average, highest, lowest;

    printf("=== Student Marks Analysis (5 Students) ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    highest = marks[0];
    lowest = marks[0];
    total = marks[0];

    for (int i = 1; i < 5; i++) {
        total += marks[i];
        if (marks[i] > highest) {
            highest = marks[i];
        }
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }

    average = total / 5;

    printf("\n--- Results ---\n");
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Highest Marks: %.2f\n", highest);
    printf("Lowest Marks: %.2f\n", lowest);

    return 0;
}
