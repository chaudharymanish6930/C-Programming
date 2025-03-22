#include<stdio.h>
int main(){
    int x=9;
    int *p=&x;
    *p=77;
    printf("%d \n",x);
    int **q=&p;
    // q=&p;
    printf("%d\n",p);
    printf("%d\n",*q);
    printf("%d\n",**q);

     
    int ***r=&p;
    printf("%d\n",r);
    printf("%d\n",*r);
    printf("%d\n",**r);
    printf("%d\n",***r);

    }