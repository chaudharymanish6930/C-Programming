#include<stdio.h> 
// function prototype
int change(int a); 
// functio defination
int change(int a){
    int a=77;
    return 0;
}
     
int main(){
    int b=22;
    change(b);
    printf("b is %d",b);
    return 0;
}