#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks obtained (out of 100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid Marks\n");
        return 0;
    }

    char grade[3];

    if (marks >= 90) {
        sprintf(grade, "A+");
    } else if (marks >= 80) {
        sprintf(grade, "A");
    } else if (marks >= 70) {
        sprintf(grade, "B");
    } else if (marks >= 60) {
        sprintf(grade, "C");
    } else if (marks >= 50) {
        sprintf(grade, "D");
    } else {
        sprintf(grade, "F");
    }

    printf("Grade: %s\n", grade);

    if (grade[0] == 'F') {
        printf("Result: Fail\n");
    } else {
        printf("Result: Pass\n");
    }

    return 0;
}
