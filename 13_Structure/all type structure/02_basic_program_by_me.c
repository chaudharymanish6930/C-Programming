#include<stdio.h>
struct node{
    char name;
    int salary;
    float height;
};
int  main(){
    struct node n1;
    printf("Enter the name of the employee1: ");
    scanf("%s",&n1.name);
    printf("Enter the salary of the employee1: ");
    scanf("%d",&n1.salary);
    printf("Enter the height of the employee1: ");
    scanf("%f",&n1.height);

    struct node n2;
    printf("Enter the name of the employee2: ");
    scanf("%s",&n2.name);
    printf("Enter the salary of the employee2: ");
    scanf("%d",&n2.salary);
    printf("Enter the height of the employee2: ");
    scanf("%f",&n2.height);

    // printf the value of strghghguct member
    printf("Name of the employee: %s\n",n1.name);
    printf("Salary of the employee: %d\n",n1.salary);
    printf("Height of the employee: %.2f\n",n1.height);

    printf("Name of the employee: %s\n",n2.name);
    printf("Salary of the employee: %d\n",n2.salary);
    printf("Height of the employee: %.2f\n",n2.height);
    return 0;
}