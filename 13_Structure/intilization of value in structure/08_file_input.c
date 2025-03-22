#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student student;
    FILE *file = fopen("student.txt", "r");

    if (file != NULL) {
        fscanf(file, "%49s %d %f", student.name, &student.age, &student.marks);
        fclose(file);

        printf("Name: %s\nAge: %d\nMarks: %.2f\n", student.name, student.age, student.marks);
    } else {
        printf("Error opening file.\n");
    }

    return 0;
}
