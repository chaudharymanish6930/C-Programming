#include<stdio.h>
int main(){
    int a;
    int *p;
    p=&a;
    a=10;
    printf("%d\n",a);
    *p=100;
    printf("%d\n",a);
    int b=90;
    *p=b;
    printf("%d\n",a);
}