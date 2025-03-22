#include<stdio.h>

//fuuction prototype
int sum(int ,int);


// function defination
int sum(int x,int y){
  printf("the sum is:%d\n",x+y);
  return x+y;
}
int main(){

    int a=1;
    int b=3;
    // int c=a+b;
    // printf("the sum of number:%d\n",c);
    sum(a,b);

    int a1=1;
    int b1=9;
    // int c1=a1+b1;
    // printf("the sum of number:%d\n",c1);
    sum(a1,b1);

    int a2=1;
    int b2=663;
    // int c2=a2+b2;
    // printf("the sum of number:%d",c2);
    sum(a2,b2);

    sum(2,5);
    sum(45,64);
    return 0;
}