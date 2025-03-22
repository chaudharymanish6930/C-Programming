#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    // using direct input value
    struct student1 {
        char name[50];
        int age;
        float marks;
    };
    struct student1 student1={"manish",25,344.6};
    printf("Name: %s\nAge: %d\nMarks: %.2f\n", student1.name, student1.age, student1.marks);

    // input from user value in structure
    struct student2 {
        char name[50];
        int age;
        float marks;
    };
    struct student2 student2;
    printf("Enter name: ");
    scanf("%s", &student2.name);
    printf("Enter age: ");
    scanf("%d", &student2.age);
    printf("Enter marks: ");
    scanf("%f", &student2.marks);
    printf("Name: %s\nAge: %d\nMarks: %.2f\n", student2.name, student2.age, student2.marks);

    // using pointer and input from user
    struct student3 {
        char name[50];
        int age;
        float marks;
    };
    struct student3 *student3;
    printf("Enter name: ");
    scanf("%s", &student3->name);
    printf("Enter age: ");
    scanf("%d", &student3->age);
    printf("Enter marks: ");
    scanf("%f", &student3->marks);
    printf("Name: %s\nAge: %d\nMarks: %.2f\n", student3->name, student3->age, student3->marks);

    
    // using pointer and direct input value in structure
    struct student4 {
        char name[50];
        int age;
        float marks;
    };
    struct student4 *student4;
    // student4->name="alice";
    strcpy(student4->name,"alice");
    student4->age=25;
    student4->marks=344.6;
    printf("Name: %s\nAge: %d\nMarks: %.2f\n", student4->name, student4->age, student4->marks);

    // using pointer and dynamic memory allocation
    struct student5 {
        char name[50];
        int age;
        float marks;
    };
    struct student5 *student5;

    student5=malloc(sizeof(student5));
    strcpy(student5->name,"manish");
                                     // student5->name="alice"; no this wrong method
    student5->age=25;
    student5->marks=344.6;
    printf("Name: %s\nAge: %d\nMarks: %.2f\n", student5->name, student5->age, student5->marks);

    // free the allocated memory only in the case of pointers
    free(student5);
    free(student4);
    // free(student3);
    
    return 0;
}   