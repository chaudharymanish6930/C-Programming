#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    // Declare a structure variable
    struct Student student;

    // Declare a pointer to the structure
    struct Student *ptr = &student;

    // Assign values using the pointer
    // strcpy(ptr->name, "Alice");  // Use strcpy to copy strings
    // ptr->age = 20;
    // ptr->marks = 85.5;
    scanf("%s", &ptr->name);
    scanf("%d", &ptr->age);
    scanf("%f", &ptr->marks);

    // Print the values stored in the structure using the pointer
    printf("Student Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
