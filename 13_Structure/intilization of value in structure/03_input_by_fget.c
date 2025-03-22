#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int age;
    float marks;
};
int main() {
    struct Student student;

    printf("Enter name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0'; // Remove trailing newline

    student.age = 20;  // Assign directly or via input
    student.marks = 85.5;

    printf("Name: %s\nAge: %d\nMarks: %.2f\n", student.name, student.age, student.marks);

    return 0;
}
