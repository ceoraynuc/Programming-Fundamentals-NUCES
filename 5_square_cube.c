/*
 Task 5: Square and Cube of a number
*/
#include <stdio.h>

int main() {
    int num;
    long long square, cube;

    printf("Enter an integer: ");
    scanf("%d", &num);

    square = (long long)num * num;
    cube = (long long)num * num * num;

    printf("Square = %lld\n", square);
    printf("Cube = %lld\n", cube);

    return 0;
}
