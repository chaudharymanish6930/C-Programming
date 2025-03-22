#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student4 {
    char name[50];
    int age;
    float marks;
};

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Allocate memory for an array of pointers to struct student4
    struct student4 **students = (struct student4**)malloc(n * sizeof(struct student4*));
    if (students == NULL) {
        printf("Memory allocation error\n");
        return 1;
    }

    // Allocate memory for each student and initialize values
    for (i = 0; i < n; i++) {
        students[i] = (struct student4*)malloc(sizeof(struct student4));
        if (students[i] == NULL) {
            printf("Memory allocation error\n");
            return 1;
        }

        // Initialize the structure using pointer
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i]->name);
        printf("Enter age for student %d: ", i + 1);
        scanf("%d", &students[i]->age);
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &students[i]->marks);
    }

    // Print the details of each student
    for (i = 0; i < n; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\nAge: %d\nMarks: %.2f\n", students[i]->name, students[i]->age, students[i]->marks);
    }

    // Free the allocated memory
    for (i = 0; i < n; i++) {
        free(students[i]);
    }
    free(students);

    return 0;
}