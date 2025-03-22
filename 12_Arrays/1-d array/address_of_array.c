#include <stdio.h>

int main() {
    int arr[5]={32,34,45,32,45};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[4]);
    return 0;
}