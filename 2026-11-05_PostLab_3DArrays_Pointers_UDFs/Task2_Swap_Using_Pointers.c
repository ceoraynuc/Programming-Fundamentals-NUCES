#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *pa = &a, *pb = &b;

    printf("Before swapping:\n");
    printf("a = %d, address of a = %p\n", *pa, (void *)pa);
    printf("b = %d, address of b = %p\n", *pb, (void *)pb);

    /* Swap using only the pointers */
    int temp = *pa;
    *pa = *pb;
    *pb = temp;

    printf("\nAfter swapping:\n");
    printf("a = %d, address of a = %p\n", *pa, (void *)pa);
    printf("b = %d, address of b = %p\n", *pb, (void *)pb);

    return 0;
}
