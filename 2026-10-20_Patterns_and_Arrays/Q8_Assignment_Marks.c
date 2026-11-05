#include <stdio.h>

int main() {
    /* marks[section][student][assignment] */
    int marks[2][5][4];
    int studentTotal[2][5];
    int sectionTotal[2];
    float assignAvg[2][4];
    int bestTotal[2], bestStudent[2];

    for (int s = 0; s < 2; s++) {
        for (int st = 0; st < 5; st++) {
            for (int a = 0; a < 4; a++) {
                printf("Section %d, Student %d, Assignment %d (out of 10): ", s + 1, st + 1, a + 1);
                scanf("%d", &marks[s][st][a]);
            }
        }
    }

    for (int s = 0; s < 2; s++) {
        sectionTotal[s] = 0;
        bestTotal[s] = -1;
        bestStudent[s] = 0;

        /* Total of each student, section total and highest total */
        for (int st = 0; st < 5; st++) {
            studentTotal[s][st] = 0;
            for (int a = 0; a < 4; a++) {
                studentTotal[s][st] += marks[s][st][a];
            }
            sectionTotal[s] += studentTotal[s][st];

            if (studentTotal[s][st] > bestTotal[s]) {
                bestTotal[s] = studentTotal[s][st];
                bestStudent[s] = st;
            }
        }

        /* Average of each assignment in this section */
        for (int a = 0; a < 4; a++) {
            int sum = 0;
            for (int st = 0; st < 5; st++) {
                sum += marks[s][st][a];
            }
            assignAvg[s][a] = sum / 5.0;
        }
    }

    printf("\n--- Total Marks of Each Student (out of 40) ---\n");
    for (int s = 0; s < 2; s++) {
        for (int st = 0; st < 5; st++) {
            printf("Section %d, Student %d: %d\n", s + 1, st + 1, studentTotal[s][st]);
        }
    }

    printf("\n--- Average Marks of Each Assignment ---\n");
    for (int s = 0; s < 2; s++) {
        for (int a = 0; a < 4; a++) {
            printf("Section %d, Assignment %d: %.2f\n", s + 1, a + 1, assignAvg[s][a]);
        }
    }

    printf("\n--- Total Marks of Each Section ---\n");
    for (int s = 0; s < 2; s++) {
        printf("Section %d: %d\n", s + 1, sectionTotal[s]);
    }

    printf("\n--- Highest Total in Each Section ---\n");
    for (int s = 0; s < 2; s++) {
        printf("Section %d: Student %d with %d marks\n", s + 1, bestStudent[s] + 1, bestTotal[s]);
    }

    printf("\n--- Students With Total Below 20 ---\n");
    int found = 0;
    for (int s = 0; s < 2; s++) {
        for (int st = 0; st < 5; st++) {
            if (studentTotal[s][st] < 20) {
                printf("Section %d, Student %d has a total below 20 (%d). Needs improvement!\n",
                       s + 1, st + 1, studentTotal[s][st]);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("No student has a total below 20.\n");
    }

    return 0;
}
