#include<stdio.h>
struct name{
    char name[50];
    int age;
    float marks;
};
int main(){
    struct name n1={"manihs",20,78.92};
    printf("%s\n",n1.name);
    printf("%d\n",n1.age);
    printf("%.18f\n",n1.marks);
}