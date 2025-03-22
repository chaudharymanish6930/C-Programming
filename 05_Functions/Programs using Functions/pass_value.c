#include<stdio.h>
// prototype function
int sum(int,int);

// function defination
int sum(int x,int u){
    return x+u;
}
int main(){
    // now c is not chnageble in this case of of function
     int c=sum(8,7);
     printf("%d",c);
}