#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float marks;
};
 
int main() {
    struct Student student;
    struct Student *ptr = &student;

    strcpy(ptr->name, "Alice"); // Use strcpy to copy strings
    printf("enter age:");
    scanf("%d",&ptr->age);
    // ptr->age = 20;
    ptr->marks = 85.5;

    printf("Name: %s\nAge: %d\nMarks: %.2f\n", ptr->name, ptr->age, ptr->marks);

    return 0;
}
