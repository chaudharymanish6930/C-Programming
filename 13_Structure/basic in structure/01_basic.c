#include <stdio.h>
// Define a structure
struct Student {
    char name[50];
    int age;
    float marks;
};
int main() {
    // Declare a structure variable
    struct Student student;

    // Assign values to the structure members
    printf("Enter name: ");
    scanf("%s", &student.name);
    printf("Enter age: ");
    scanf("%d", &student.age);
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    // Print the values
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
