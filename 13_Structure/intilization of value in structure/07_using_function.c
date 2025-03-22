#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student student = (struct Student){"Alice", 20, 85.5};

    printf("Name: %s\nAge: %d\nMarks: %.2f\n", student.name, student.age, student.marks);

    return 0;
}

