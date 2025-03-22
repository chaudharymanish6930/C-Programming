#include<stdio.h>
int main(){
    int i=5;
    int *j=&i;
    int** k=&j;

//    ***&&&

    printf("%p\n",&i);
    printf("%p\n",j);
    printf("%p\n",&j);
    printf("%p\n",k);
    return 0;

}