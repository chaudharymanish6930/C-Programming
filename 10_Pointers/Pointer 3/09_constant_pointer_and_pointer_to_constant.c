#include <stdio.h>

int main() {
    int a = 10, b = 20;

    // Constant pointer
    int *const ptr1 = &a;
    *ptr1 = 15; // Allowed
    // ptr1 = &b; // Not allowed

    // Pointer to constant
    const int *ptr2 = &a;
    // *ptr2 = 15; // Not allowed
    ptr2 = &b; // Allowed

    printf("a: %d, b: %d\n", a, b);

    return 0;
}
