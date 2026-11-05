#include <stdio.h>

int main() {
    int m[3][3];
    int isNull = 1, isDiagonal = 1, isUpper = 1, isLower = 1, isIdentity = 1;

    printf("Enter elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (m[i][j] != 0) isNull = 0;
            if (i != j && m[i][j] != 0) isDiagonal = 0;
            if (i > j && m[i][j] != 0) isUpper = 0;
            if (i < j && m[i][j] != 0) isLower = 0;
            if (i == j && m[i][j] != 1) isIdentity = 0;
            if (i != j && m[i][j] != 0) isIdentity = 0;
        }
    }

    printf("\nMatrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%4d", m[i][j]);
        printf("\n");
    }

    printf("\nApplicable matrix types:\n");
    printf("- Square Matrix (3x3)\n");
    if (isNull)     printf("- Null Matrix\n");
    if (isDiagonal) printf("- Diagonal Matrix\n");
    if (isUpper)    printf("- Upper Triangular Matrix\n");
    if (isLower)    printf("- Lower Triangular Matrix\n");
    if (isIdentity) printf("- Identity Matrix\n");

    printf("\nDiagonal elements: ");
    for (int i = 0; i < 3; i++)
        printf("%d ", m[i][i]);

    printf("\nUpper triangular elements: ");
    for (int i = 0; i < 3; i++)
        for (int j = i; j < 3; j++)
            printf("%d ", m[i][j]);

    printf("\nLower triangular elements: ");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j <= i; j++)
            printf("%d ", m[i][j]);
    printf("\n");
    return 0;
}
