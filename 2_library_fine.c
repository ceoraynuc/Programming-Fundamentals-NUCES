/*
 Task 2: Library Fine Calculator
   0 days        -> No Fine
   1-5 days      -> Rs. 50
   6-10 days     -> Rs. 100
   more than 10  -> Rs. 200
*/
#include <stdio.h>

int main() {
    int lateDays;

    printf("Enter number of late days: ");
    scanf("%d", &lateDays);

    if (lateDays == 0) {
        printf("No Fine\n");
    } else {
        if (lateDays >= 1 && lateDays <= 5) {
            printf("Fine: Rs. 50\n");
        } else {
            if (lateDays >= 6 && lateDays <= 10) {
                printf("Fine: Rs. 100\n");
            } else {
                printf("Fine: Rs. 200\n");
            }
        }
    }

    return 0;
}
