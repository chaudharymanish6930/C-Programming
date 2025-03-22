#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student students[4] = {{"Alice", 20, 85.5}, {"Bob", 21, 90.0},{"Alice", 20, 85.5}, {"Bob", 21, 90.0}};

    for (int i = 0; i <=4; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\nAge: %d\nMarks: %.2f\n", students[i].name, students[i].age, students[i].marks);
    }

    return 0;
}
