#include<stdio.h>
void greet();
void wishes();
void type();

void  greet(){
printf("good morning\n");
}
void wishes(){
    printf("good afternoon\n");
}
void type(){
    printf("good evening\n");
}
int main(){
    greet();
    wishes();
    type();
    return 0;
}