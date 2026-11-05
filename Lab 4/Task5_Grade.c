#include <stdio.h>

int main() {
    float marks;
    printf("Enter marks: ");
    scanf("%f", &marks);
    if (marks >= 80)
        printf("Grade A\n");
    else if (marks >= 60)
        printf("Grade B\n");
    else
        printf("Grade C\n");
    return 0;
}
