#include <stdio.h>

int main() {
    float distance;
    int hour;

    printf("Enter distance traveled (km): ");
    scanf("%f", &distance);
    printf("Enter hour of the day (0-23): ");
    scanf("%d", &hour);

    if (distance <= 0) {
        printf("Invalid Distance\n");
        return 0;
    }

    float fare = 50.0f;

    if (distance > 1) {
        fare += (distance - 1) * 22.0f;
    }

    if (hour < 6 || hour > 22) {
        fare += 40.0f;
    }

    printf("Total Fare: Rs %.2f\n", fare);

    return 0;
}
