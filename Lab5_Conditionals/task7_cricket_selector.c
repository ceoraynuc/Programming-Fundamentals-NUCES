#include <stdio.h>

int main() {
    float average;
    int matches, fitnessFailed;

    printf("Enter batting average: ");
    scanf("%f", &average);
    printf("Enter matches played: ");
    scanf("%d", &matches);
    printf("Fitness failure status (1=Failed, 0=Passed): ");
    scanf("%d", &fitnessFailed);

    if (matches < 5) {
        printf("Rejected - Insufficient Matches\n");
        return 0;
    }

    if (average >= 35 && matches >= 10) {
        printf("Selected\n");
    } else if (average >= 25 && average <= 34.99f && matches >= 20) {
        if (fitnessFailed) {
            printf("Rejected - Fitness\n");
        } else {
            printf("Selected (Experience Quota)\n");
        }
    } else {
        printf("Not Selected\n");
    }

    return 0;
}
