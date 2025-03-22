#include <stdio.h>
int main() {
    int L,B;
    printf("enter the length of rectangle:");
    scanf("%d",&L);
    printf("enter the breadth of rectangle:");
    scanf("%d",&B);
    int a=L*B;
    int p=2*(L+B);
    if(a>p){
        printf("area is greater than perimeter");
    }
    else {
        printf("area is not greater than perimeter");
    }
    return 0;
}