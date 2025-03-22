#include <stdio.h>

int main() {
    int a = 42;
    float b = 3.14;
    void *ptr;

    ptr = &a;
    printf("Value of a using void pointer: %d\n", *(int *)ptr);

    ptr = &b;
    printf("Value of b using void pointer: %.2f\n", *(float *)ptr);

    return 0;
}
