#include<stdio.h>
int main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);

    switch(a){
        case 1:
        printf("you enter 1");
        break;
        case 2:
        printf("you enter 2");
             break;
        case 3:
        printf("you enter 3");
             break;
        case 4:
        printf("you enter 4");
             break;
        default:
        printf("nothing match ");
             break;
    }
    return 0;
}