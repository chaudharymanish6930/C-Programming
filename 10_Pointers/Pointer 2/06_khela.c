#include<stdio.h>
int main(){
    int x=9;
    int *p=&x;
    int **q=&p;
    printf("%d\n",q);
    printf("%d\n",*q);
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",&p); 
    printf("%d\n",x);
    
}