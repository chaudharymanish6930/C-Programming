#include <stdio.h>

// Function to modify the value
void modifyValue(int *ptr) {
    *ptr = 100; // Change the value at the address
}

int main() {
    int a = 50;
    printf("Before modification: %d\n", a);

    modifyValue(&a); // Pass the address of `a`
    printf("After modification: %d\n", a);

    return 0;
}
