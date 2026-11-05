#include <stdio.h>

int main() {
    float temp;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);

    if (temp < 15) {
        printf("Cold\n");
    } else if (temp <= 30) {
        printf("Normal\n");
    } else {
        printf("Hot\n");
    }

    return 0;
}
