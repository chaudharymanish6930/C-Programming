#include<stdio.h>


int sum(int,int);


int sum(int a,int b){
    return a+b;
}
int main(){
    int x,y;
    printf("enter the numbers :");
    scanf("%d %d",&x,&y);
    printf("the sum of 5 and 6 is:%d",sum(x,y));
    return 0;
}