#include <stdio.h>

int main() {
    int age;
    float marks;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter marks: ");
    scanf("%f", &marks);

    if (age >= 18) {
        if (marks >= 50)
            printf("Eligible for Admission\n");
        else
            printf("Not eligible: marks must be 50 or above.\n");
    } else {
        printf("Not eligible: age must be 18 or above.\n");
    }
    return 0;
}
