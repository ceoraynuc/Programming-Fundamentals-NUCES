#include <stdio.h>

int main() {
    float marks;
    printf("Enter marks: ");
    scanf("%f", &marks);
    printf("%s\n", (marks >= 50) ? "Pass" : "Fail");
    return 0;
}
