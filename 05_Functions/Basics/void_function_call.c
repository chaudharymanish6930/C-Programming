#include<stdio.h>

void australia(){
    printf("you are in australia\n");
    void england();
    england();
    return;
}

int main(){
    void india();
     india();
    return 0;
}

void india(){
    printf("you are in india\n");
   void australia();
   australia();
    return;
}

void england(){
    printf("your are in england\n");
    return;
}