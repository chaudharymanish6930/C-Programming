#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student student;

    printf("Enter name: ");
    scanf("%s", &student.name);
    printf("Enter age: ");
    scanf("%d", &student.age);
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("Name: %s\nAge: %d\nMarks: %.2f\n", student.name, student.age, student.marks);

    return 0;
}
