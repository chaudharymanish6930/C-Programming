#include<stdio.h>
int main(){
    int x=3;
    printf("the value address is :%p\n",&x);
    printf("the real vallue is %d\n",*(&x)); // x ke adrress pr kon reehta hain : xkhud rreehta hainn
    printf("the valuue of the x is:%d",x);
    return 0;
}