#include <stdio.h>

int main() {
    const char *names[] = {"Alice", "Bob", "Charlie"};
    for (int i = 0; i < 3; i++) {
        printf("Name[%d]: %s\n", i, names[i]);
    }
    return 0;
}
