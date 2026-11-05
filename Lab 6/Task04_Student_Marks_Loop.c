#include <stdio.h>

int main() {
    float marks[100];
    int count = 0, again;

    do {
        printf("Enter marks of student %d: ", count + 1);
        scanf("%f", &marks[count]);
        count++;
        if (count == 100) {
            printf("Maximum of 100 students reached.\n");
            break;
        }
        printf("Enter marks for another student? (1 = Yes, 0 = No): ");
        scanf("%d", &again);
    } while (again == 1);

    printf("\nMarks entered:\n");
    for (int i = 0; i < count; i++)
        printf("Student %d: %.2f\n", i + 1, marks[i]);
    printf("Total number of students: %d\n", count);
    return 0;
}
