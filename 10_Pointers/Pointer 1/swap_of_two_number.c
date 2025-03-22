#include<stdio.h>

void swap(int *x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
  
}
int main(){
  int a=4, b=6;
  swap(&a,&b);
  printf("the swap number:%d %d",a,b);
    return 0;
}