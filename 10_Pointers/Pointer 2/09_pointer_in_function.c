#include<stdio.h>
void increment(int *p){
    *p=*p+1;
}
int main(){
     int x=9;
     increment(&x);
     printf("%d\n",x);
    return 0;
}