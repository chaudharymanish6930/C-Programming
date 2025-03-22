#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int)); // Allocate memory for an integer
    if (!ptr) {
        printf("Memory allocation failed\n");
        return 1;
    }

    *ptr = 30; // Assign value
    printf("Value at dynamically allocated memory: %d\n", *ptr);

    free(ptr); // Free allocated memory
    return 0;
}
