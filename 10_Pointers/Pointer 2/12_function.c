#include<stdio.h>
int add(int*a,int*b){
    printf("%d\n",&a);
    printf("%d\n",a);
    printf("%d\n",*a);
    int c=*a+*b;
    return c;
}
int main(){
    int a=2,b=3;
    printf("address of a in main:%d\n",&a);
    int c=add(&a,&b);
    printf("sum:%d",c);
    return 0;
}