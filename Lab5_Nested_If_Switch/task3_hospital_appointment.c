#include <stdio.h>

int main() {
    int appointment, doctorAvailable, registrationCompleted;

    printf("Do you have an appointment? (1 = Yes, 0 = No): ");
    scanf("%d", &appointment);
    printf("Is the doctor available? (1 = Yes, 0 = No): ");
    scanf("%d", &doctorAvailable);
    printf("Is registration completed? (1 = Yes, 0 = No): ");
    scanf("%d", &registrationCompleted);

    if (appointment == 1) {
        if (doctorAvailable == 1) {
            if (registrationCompleted == 1) {
                printf("You can meet the doctor.\n");
            } else {
                printf("Please complete your registration first.\n");
            }
        } else {
            printf("The doctor is not available right now.\n");
        }
    } else {
        printf("You do not have an appointment.\n");
    }

    return 0;
}
