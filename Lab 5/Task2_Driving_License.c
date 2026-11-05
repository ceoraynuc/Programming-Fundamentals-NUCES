#include <stdio.h>

int main() {
    int cnic, passed;
    printf("Do you have a CNIC? (1 = Yes, 0 = No): ");
    scanf("%d", &cnic);

    if (cnic == 1) {
        printf("Have you passed the driving test? (1 = Yes, 0 = No): ");
        scanf("%d", &passed);
        if (passed == 1)
            printf("License Can Be Issued\n");
        else
            printf("License cannot be issued: driving test not passed.\n");
    } else {
        printf("License cannot be issued: CNIC is required.\n");
    }
    return 0;
}
