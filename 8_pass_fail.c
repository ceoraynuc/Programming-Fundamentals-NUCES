/*
 Task 8: Pass/Fail Checker
 Marks >= 50 -> Pass
 Marks < 50  -> Fail
*/
#include <stdio.h>

int main() {
    float marks;

    printf("Enter student's marks: ");
    scanf("%f", &marks);

    if (marks >= 50) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
