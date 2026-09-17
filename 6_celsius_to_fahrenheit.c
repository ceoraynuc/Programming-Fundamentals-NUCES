/*
 Task 6: Celsius to Fahrenheit Conversion
 F = (C * 9/5) + 32
*/
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("Temperature in Fahrenheit = %.2f F\n", fahrenheit);

    return 0;
}
