#include<stdio.h>
int main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);

    switch(a){
        case 1:
        printf("you enter 1");
        case 2:
        printf("you enter 2");
        case 3:
        printf("you enter 3");
        case 4:
        printf("you enter 4");
        default:
        printf("nothing match ");
    }
    return 0;
}