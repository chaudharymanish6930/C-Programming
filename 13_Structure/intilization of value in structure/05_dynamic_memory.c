#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student *student = (struct Student *)malloc(sizeof(struct Student));

    strcpy(student->name, "Alice");
    student->age = 20;
    student->marks = 85.5;

    printf("Name: %s\nAge: %d\nMarks: %.2f\n", student->name, student->age, student->marks);

    free(student); // Free allocated memory
    return 0;
}
