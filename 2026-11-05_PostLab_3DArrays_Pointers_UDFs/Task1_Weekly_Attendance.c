#include <stdio.h>

int main() {
    /* attendance[class][student][day]: 1 = present, 0 = absent */
    int attendance[2][3][4];
    int present[2][3];
    int classTotal[2];
    int best[2];

    for (int c = 0; c < 2; c++) {
        for (int s = 0; s < 3; s++) {
            for (int d = 0; d < 4; d++) {
                do {
                    printf("Class %d, Student %d, Day %d (1=present, 0=absent): ", c + 1, s + 1, d + 1);
                    scanf("%d", &attendance[c][s][d]);
                } while (attendance[c][s][d] != 0 && attendance[c][s][d] != 1);
            }
        }
    }

    int allFour = 0;
    for (int c = 0; c < 2; c++) {
        classTotal[c] = 0;
        best[c] = -1;
        for (int s = 0; s < 3; s++) {
            present[c][s] = 0;
            for (int d = 0; d < 4; d++) {
                present[c][s] += attendance[c][s][d];
            }
            classTotal[c] += present[c][s];
            if (present[c][s] > best[c]) best[c] = present[c][s];
            if (present[c][s] == 4) allFour++;
        }
    }

    printf("\n--- Days Present per Student ---\n");
    for (int c = 0; c < 2; c++) {
        for (int s = 0; s < 3; s++) {
            printf("Class %d, Student %d: %d day(s)\n", c + 1, s + 1, present[c][s]);
        }
    }

    printf("\n--- Highest Attendance in Each Class ---\n");
    for (int c = 0; c < 2; c++) {
        printf("Class %d (%d days): Student", c + 1, best[c]);
        for (int s = 0; s < 3; s++) {
            if (present[c][s] == best[c]) printf(" %d", s + 1);
        }
        printf("\n");
    }

    printf("\nStudents present on all 4 days: %d\n", allFour);

    printf("\n--- Class Totals ---\n");
    for (int c = 0; c < 2; c++) {
        printf("Class %d: %d out of 12\n", c + 1, classTotal[c]);
    }
    if (classTotal[0] > classTotal[1])
        printf("Class with highest overall attendance: Class 1\n");
    else if (classTotal[1] > classTotal[0])
        printf("Class with highest overall attendance: Class 2\n");
    else
        printf("Both classes have equal overall attendance.\n");

    return 0;
}
