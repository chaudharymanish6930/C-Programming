#include<stdio.h>
int main(){
    int x=6;
    int * y=&x;
    printf("%d\n",x);
    printf("%d\n",y); 
    printf("%d\n",&x);
    printf("%d\n",&y);
    y=7;
    printf("%d\n",y);
    printf("%d\n",x);
    return 0;
}