#include <stdio.h>
int main() {
    int a,b,c;
    printf("enter first a:");
    scanf("%d",&a);
    printf("enter second b:");
    scanf("%d",&b);
    printf("enter the third c:");
    scanf("%d",&c);
    if(a+b>c && b+c>a && c+a>b){
        printf("valid triangle");
    }
    else {
        printf("invalid triangle");
    }
    return 0;
}