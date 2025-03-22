#include<stdio.h>
int main(){
    int i=72;
    int* j=&i; // j is pointer pointing to i
        // or
        // int j=&i;
    int k=87;
    printf("the addrees of i is :%p\n",&i);
    printf("the addrees of j is :%p\n",j);
    printf("the adddres of k is:%p",&k);
    return 0;
}