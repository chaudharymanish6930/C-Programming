#include<stdio.h>
int sum(int,int);
int sum(int a,int b){
    return a+b;
}
int main(){
    printf("the sum of 5 and 6 is:%d",sum(5,6));
    return 0;
}