#include<stdio.h>
#include<stdlib.h>
int main(){
    int a =sizeof(long);
    int b =sizeof(double);
    printf("%d\n",a);
    printf("%d",b);    return 0;
    int* x=(int*)malloc(100*sizeof(int));
    printf("%d",*x);
}