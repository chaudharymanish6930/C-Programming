#include <stdio.h>

int main() {
    int a = 20;
    int *ptr = &a;    // Pointer to `a`
    int **ptr2 = &ptr; // Pointer to pointer

    printf("Value of a: %d\n", a);
    printf("address of a:%d\n",&a);
    printf("Value of a using single pointer: %d\n", ptr);
    printf("Value of a using single pointer: %d\n", *ptr);
    printf("Value of a using single pointer: %d\n", &*ptr);
    printf("Value of a using double pointer: %d\n", **ptr2);
    printf("Value of a using double pointer: %d\n", &**ptr2);
    printf("Value of a using double pointer: %d\n",ptr2);

    
    return 0;
}
