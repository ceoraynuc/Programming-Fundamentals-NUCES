#include <stdio.h>

int main() {
    int dept, sec;
    printf("Select department (1 = Computer Science, 2 = Information Technology, 3 = Artificial Intelligence): ");
    scanf("%d", &dept);

    switch (dept) {
        case 1:
        case 2:
        case 3:
            printf("Select section (1 = Section A, 2 = Section B): ");
            scanf("%d", &sec);
            switch (sec) {
                case 1:
                case 2:
                    printf("Department: ");
                    switch (dept) {
                        case 1: printf("Computer Science"); break;
                        case 2: printf("Information Technology"); break;
                        case 3: printf("Artificial Intelligence"); break;
                    }
                    printf(", Section %c\n", sec == 1 ? 'A' : 'B');
                    break;
                default:
                    printf("Invalid section choice.\n");
            }
            break;
        default:
            printf("Invalid department choice.\n");
    }
    return 0;
}
