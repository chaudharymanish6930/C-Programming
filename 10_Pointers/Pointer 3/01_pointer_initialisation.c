#include <stdio.h>

int main() {
    int a = 10;       // Declare an integer variable
    int *ptr = &a;    // Pointer initialized to the address of `a`

    printf("Value of a: %d\n", a);        // Direct access
    printf("Value of a using pointer: %d\n", *ptr); // Access via pointer
    printf("Address of a: %p\n", &a);    // Address of `a`
    printf("Pointer address: %p\n", ptr); // Pointer value (address of `a`)

    return 0;
}
