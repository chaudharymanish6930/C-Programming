#include<stdio.h>
  int add(int a, int b){
    return a+b;
}
int main(){
    int a;
     printf("enter number 1st :");
     scanf("%d",&a);
     int b;
     printf("enter number 2nd :");
     scanf("%d",&b);
     int sum= add(a,b);
     printf("%d",sum);
    return 0;
}