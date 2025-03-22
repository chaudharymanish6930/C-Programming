#include<stdio.h>
int main(){
    int a;
    int *p=&a;
   // both are same....p=&a;
    a=9;
    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",p);    /// p value is the address of the a variable
    printf("%d\n",*p);
    printf("%d\n",&p);
    *p=99;
    printf("%d\n",a);

    return 0;
}