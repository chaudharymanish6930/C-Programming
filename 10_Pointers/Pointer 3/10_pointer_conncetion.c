#include <stdio.h>

int main() {
    int a = 20;
    int b = 30;
    int *ptr = &a;    // Pointer to `a`
    int **ptr2 = &ptr; // Pointer to pointer

    printf("Initial values:\n");
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
    printf("%d\n",ptr);
    printf("Value of a using single pointer: %d\n", *ptr);
    printf("Value of a using double pointer: %d\n", **ptr2);

    // Connect the pointer to another variable `b`
    ptr = &b;

    printf("\nAfter connecting pointer to b:\n");
    printf("Value of b using single pointer: %d\n", *ptr);
    printf("Value of b using double pointer: %d\n", **ptr2);

    return 0;
}