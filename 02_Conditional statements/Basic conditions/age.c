#include<stdio.h>
int main(){
    int age;
    printf("enter the age of person:");
    scanf("%d",&age);
    if(age<=18){
        printf("you are not eligible ");
        }
    else{
        printf("your are eligible ");
    }
    return 0;
}