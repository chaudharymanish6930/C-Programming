#include<stdio.h>
int main(){
    int marks1,marks2,marks3;
    printf("enter the marks1 :");
    scanf("%d",&marks1);
    printf("enter the marks2 :");
    scanf("%d",&marks2);
    printf("enter the marks3 :");
    scanf("%d",&marks3);

    if(marks1<33 || marks2<33 || marks3<33){
        printf("you are fail");
    }
    else if((marks1+marks2+marks3)/3 <40){
        printf("you are just pass");
    }
    else{
        printf("you ar passed");
    }
    return 0;
}