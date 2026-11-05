#include <stdio.h>

int main() {
    /* marks[student][0] = Mid, marks[student][1] = Final */
    int marks[4][2];
    int total[4];
    int highestMid, highestFinal, highestOverall;
    int lowestMid, lowestFinal, lowestOverall;
    float sumMid = 0, sumFinal = 0;

    for (int i = 0; i < 4; i++) {
        printf("Student %d\n", i + 1);
        printf("  Enter Mid marks: ");
        scanf("%d", &marks[i][0]);
        printf("  Enter Final marks: ");
        scanf("%d", &marks[i][1]);
    }

    highestMid = lowestMid = marks[0][0];
    highestFinal = lowestFinal = marks[0][1];

    for (int i = 0; i < 4; i++) {
        total[i] = marks[i][0] + marks[i][1];
        sumMid += marks[i][0];
        sumFinal += marks[i][1];

        if (marks[i][0] > highestMid)   highestMid = marks[i][0];
        if (marks[i][0] < lowestMid)    lowestMid = marks[i][0];
        if (marks[i][1] > highestFinal) highestFinal = marks[i][1];
        if (marks[i][1] < lowestFinal)  lowestFinal = marks[i][1];
    }

    /* Overall highest / lowest across both columns */
    highestOverall = (highestMid > highestFinal) ? highestMid : highestFinal;
    lowestOverall  = (lowestMid < lowestFinal) ? lowestMid : lowestFinal;

    printf("\n--- Total Marks of Each Student ---\n");
    for (int i = 0; i < 4; i++) {
        printf("Student %d: %d\n", i + 1, total[i]);
    }

    printf("\n--- Highest Marks ---\n");
    printf("Highest in Mid: %d\n", highestMid);
    printf("Highest in Final: %d\n", highestFinal);
    printf("Highest overall: %d\n", highestOverall);

    printf("\n--- Lowest Marks ---\n");
    printf("Lowest in Mid: %d\n", lowestMid);
    printf("Lowest in Final: %d\n", lowestFinal);
    printf("Lowest overall: %d\n", lowestOverall);

    printf("\n--- Averages ---\n");
    printf("Average of Mid marks: %.2f\n", sumMid / 4);
    printf("Average of Final marks: %.2f\n", sumFinal / 4);

    return 0;
}
