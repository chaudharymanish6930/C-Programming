#include<stdio.h>
int factorial(int);
//    factorial(5)= 1 X 2 X 3 X 4 X 5
//    factorial(4)= 1 X 2 X 3 X 4
//    factorial(3)= 1 X 2 X 3
//    factorial(2)= 1 X 2
//    factorial(n)= 1 X 2 X 3 X 4......X (n-1) X n
//    factorial(n-1)= 1 X 2 X 3 X (n -1)
  
int factorial(int n){
    if(n==1 || n==0){ // base condition
        return 1;
    }
    else{
        // n* factorial(n-1) same as below
        return factorial(n-1) * n;
    }

    
}
int main(){
    int a;
    printf("enter the number you want to find factrial :");
    scanf("%d",&a);
    printf("the factorial of %d is :%d",a,factorial(a));
    return 0;
}