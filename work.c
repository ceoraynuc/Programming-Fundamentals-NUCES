#include <stdio.h>

int main() {
    float marks;

    printf("Enter student's marks: ");
    scanf("%f", &marks);
    (marks >= 50) ? printf("Pass\n") : printf("Fail\n");

    return 0;
}
