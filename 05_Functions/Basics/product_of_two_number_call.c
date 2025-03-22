#include<stdio.h>
  int add(int x, int Y){
    return x*Y;
}
int main(){
    int a;
     printf("enter number 1st :");
     scanf("%d",&a);
     int b;
     printf("enter number 2nd :");
     scanf("%d",&b);
     int sum= add(a,b);
     printf("product of the number :%d",sum);
    return 0;
}